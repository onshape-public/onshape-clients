GEN_DIR = "$(HOME)/go"

.PHONY: go-all go-info go-test go-vet go-lint go-fmt go-gen

go-all: go-info go-gen go-vet go-test 

go-info:
	@echo Will be generating in $(GEN_DIR)

go-gen: go-info
	@onshape-clients -c go generate -o $(GEN_DIR)

go-test: go-gen
	@cd $(GEN_DIR); go mod tidy; go test -v ./...

go-vet:
	@cd $(GEN_DIR); go vet -all ./onshape

go-lint:
	@cd $(GEN_DIR); golint -set_exit_status ./...

go-fmt:
	@cd $(GEN_DIR); test -z $$(go fmt ./...)

go-publish:
	@onshape-clients -c go publish -s $(GEN_DIR)
