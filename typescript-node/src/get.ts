'use strict';

import fetch, { RequestContext } from 'node-fetch';
import { Configuration, BuildApi } from './index';
import { ResponseContext } from './runtime';
import { loggingMiddleware } from './middleware/loggingMiddleware';
import { debuggingMiddleware } from './middleware/debuggingMiddleware';
import { onshapeApiKeyMiddleware } from './middleware/onshapeApiKeyMiddleware';
import { onshapeBasicAuthApiKey } from './middleware/onshapeBasicAuthApiKey';

// btadmin user endpoints
// const passedURL = 'http://localhost.dev.onshape.com:8080/api/users/613a0d5e1cf19d45a96b0493/emails';
// const passedURL = 'http://localhost.dev.onshape.com:8080/api/build';
// const passedURL = 'http://localhost.dev.onshape.com:8080/api/users/current';
// const passedURL = 'http://localhost.dev.onshape.com:8080/api/documents';
const passedURL = 'http://localhost.dev.onshape.com:8080/api/documents/d/a130d974e8924f9565ea9e1e/w/3060fbeac71fb84cae8918d8/e/6734fea24d7e373cf25a1850/export?format=STL&microversion=5e85aa1598b1193333a2563c&destinationName=Part Studio 1&mode=binary&scale=1.0&resolution=medium&units=meter&grouping=true&angleTolerance=0.1090830782496456&chordTolerance=0.00012&minFacetWidth=0.000254&triggerAutoDownload=true&storeInDocument=false&linkDocumentId=a130d974e8924f9565ea9e1e&linkDocumentWorkspaceId=3060fbeac71fb84cae8918d8&configuration=';

const config = new Configuration(
  {
  fetchApi: fetch as any,
  basePath: 'http://localhost.dev.onshape.com:8080',
  middleware: [debuggingMiddleware(passedURL), onshapeBasicAuthApiKey(), loggingMiddleware()]
});

const buildApi = new BuildApi(config);
buildApi.getBuild()

.catch((e) => {
  console.log(e);
});

