import { ResponseContext, RequestContext, FetchParams, HTTPHeaders, Middleware } from '../runtime';
import fetch from 'node-fetch';
import * as fs from 'fs';

export const loggingMiddleware = (): Middleware => {
  let counter = 0;
  const counterMap = new WeakMap();
  let requestDate: Date;

  return {
    
    pre: async (requestContext: RequestContext) => {
      counter++;

      const init = requestContext.init;
      requestDate = (new Date(init.headers['Date']));
      counterMap.set(init, counter);

      console.log('*'.repeat(100));
      console.log(`===== Onshape REST Request ${counter}: ${init.method} ${requestContext.url} @ ${requestDate.toISOString()}`);

      for (const [headerKey, headerValue] of Object.entries(init.headers)) {
        console.log(`> ${headerKey}: ${headerValue}`);
      };
      if (init.body){
        console.log(init.body);
      };
      console.log('*'.repeat(100));
    },

    post: async (responseContext: ResponseContext) => {
      const responseDate = new Date();
      const init = responseContext.init;
      const response = responseContext.response;
      const counter = counterMap.get(init);

      console.log(`===== Onshape REST Response ${counter}: ${response.status} ${init.method} ${responseContext.response.url} (${responseDate.getTime() - requestDate.getTime()}ms)`);
      
      response.headers.forEach((headerValue, headerKey)  => {
        console.log(`< ${headerKey}: ${headerValue}`);
      });
      if (response.ok && !response.headers.get('content-type').includes('json')) {
        const bufferSize = (await response.arrayBuffer()).byteLength;
        console.log(`< file-size: ${bufferSize}  bytes`);
      };
      console.log('*'.repeat(100));

      const responseContentType = responseContext.response.headers.get('content-type');

      if (response.ok && responseContentType.includes('json')) {
        const responseData = await responseContext.response.json();
        console.log(JSON.stringify(responseData, null, 2));
      };
      console.log(responseContext.response.type);

      counterMap.delete(init);
    }
  };
};