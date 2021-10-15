
import { ResponseContext, RequestContext, Middleware } from '../runtime';
import { createHmac} from 'crypto';
import { parse as urlParser } from 'url';
import { readFileSync } from 'fs';

export const onshapeApiKeyMiddleware = (): Middleware => {
  
  const apiKeys = JSON.parse(readFileSync('../.apiKeys', 'utf-8'));

  return {
  
  pre: async (context: RequestContext) => {

    const init = Object.assign({}, context.init, context );
    const authDate: string = (new Date()).toUTCString();
    const onNonce: string = generateAlphanumeric(25);
    const parsedUrl = urlParser(context.url);
    const queryString = parsedUrl.query;
    const apiURL = parsedUrl.host;
    const accessKey = apiKeys[apiURL].accessKey;
    const secretKey = apiKeys[apiURL].secretKey;
    
    init.headers['Date'] = authDate;
    init.headers['On-Nonce'] = onNonce;

    if (!('Content-Type' in init.headers)) {
      init.headers['Content-Type'] = 'application/json';
    };

    const hmacString: string = [
      init.method,
      onNonce,
      authDate,
      init.headers['Content-Type'],
      parsedUrl.pathname,
      queryString,
      ''
    ].join('\n').toLowerCase();

    const hmac = createHmac('sha256', secretKey);
    hmac.update(hmacString);
    const signature = hmac.digest('base64');
    const assing = 'On ' + accessKey + ':HmacSHA256:' + signature;
    init.headers['Authorization'] = assing;
    
    if (!('Accept' in init.headers)) {
      init.headers['Accept'] = 'application/json,application/vnd.onshape.v2+json';
    }
  },
}};

function rand(min: number, max: number): number {
  return Math.floor(Math.random() * (max - min + 1)) + min;
};

function generateAlphanumeric(length: number): string {
  const possibleCharacters = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890';
  
  let generatedString: string = '';
  for (let i = 0; i < length; i++){
    generatedString += possibleCharacters.charAt(rand(0, possibleCharacters.length - 1))
  };
  return generatedString;
};