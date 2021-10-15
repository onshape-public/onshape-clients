import { ResponseContext, RequestContext, FetchParams, HTTPHeaders, Middleware } from '../runtime';

export const debuggingMiddleware = (passedURL: string): Middleware => {
  return {
    pre: async (context: RequestContext) => {
          
      context.url = passedURL;
      const intercept: FetchParams = {
        url: context.url,
        init: context.init,
      };
      return intercept;
    },
    // post: async (responseContext: ResponseContext) => {
      
    //   if (responseContext.response.status === 307) {
    //     console.log('*************************************************************');
    //     console.log(`debugMiddleware, post: , responseContext.response.status: ${responseContext.response.status}`);
    //     console.log('*************************************************************');
    //     console.log(responseContext.response.headers.get('location'));
    //   }
    // }
  };
};