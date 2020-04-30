GEN_DIR = "$(HOME)/onshape-clients-codegen"

.PHONY: go-all go-info go-test go-vet go-lint go-fmt go-gen

go-all: go-info go-gen go-vet go-test 

go-info:
	@echo Will be generating in $(GEN_DIR)

go-gen: go-info
	@onshape-clients -s $(GEN_DIR) -c go generate

go-test: go-gen
	@cd "$(GEN_DIR)/go"; go mod tidy; go test -v ./...

go-vet:
	@cd "$(GEN_DIR)/go"; go vet -all ./onshape

go-lint:
	@cd "$(GEN_DIR)/go"; golint -set_exit_status ./...

go-fmt:
	@cd "$(GEN_DIR)/go"; test -z $$(go fmt ./...)

go-publish:
	@onshape-clients -c go  -s $(GEN_DIR) publish
