
import { ResponseContext, RequestContext, FetchParams, HTTPHeaders, Middleware } from '../runtime';
import { parse as urlParser } from 'url';
import { readFileSync } from 'fs';

export const onshapeBasicAuthApiKey = (): Middleware => {
  
  const apiKeys = JSON.parse(readFileSync('../.apiKeys', 'utf-8'));

  return {
  
  pre: async (requestContext: RequestContext) => {

    const init = Object.assign({}, requestContext.init, requestContext );
    const parsedUrl = urlParser(requestContext.url)
    const apiURL = parsedUrl.host;
    const accessKey = apiKeys[apiURL].accessKey;
    const secretKey = apiKeys[apiURL].secretKey;

    const headers = init.headers;

    const authDate: string = (new Date()).toUTCString();
    headers['Date'] = authDate;

    if (!('Content-Type' in headers)) {
      headers['Content-Type'] = 'application/json';
    };

    const assing = 'Basic ' + Buffer.from(accessKey + ':' + secretKey).toString('base64');
    init.headers['Authorization'] = assing;

    if (!('Accept' in headers)) {
      headers['Accept'] = 'application/json,application/vnd.onshape.v2+json,application/octet-stream';
    };
  },
}};