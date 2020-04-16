# Go Client for Onshape public API

## The simplest possible thing to try: Creating a document
```Go
package main

import (
	"context"
	"fmt"

	"github.com/onshape-public/go-client/onshape"
)

func main() {
	config := onshape.NewConfiguration()
	config.Debug = true

	client := onshape.NewAPIClient(config)

	ctx := context.WithValue(context.Background(), onshape.ContextAPIKeys,
		onshape.APIKeys{"Your_Secret_Key", "Your_Access_Key"})

	docParams := onshape.NewBTDocumentParams()
	docParams.SetName("Name For Your Document")

	docInfo, rawResp, err := client.DocumentsApi.CreateDocument(ctx).BTDocumentParams(*docParams).Execute()

	if err != nil || (rawResp != nil && rawResp.StatusCode >= 300) {
		fmt.Print("err: ", err, " -- Response status: ", rawResp)
	} else {
		fmt.Println("Created a document w/the name: ", docInfo.GetName())
    }
}
```

## The Detailed API Documentation
Could be found [here](./onshape/README.md)