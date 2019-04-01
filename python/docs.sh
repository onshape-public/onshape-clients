#!/usr/bin/env bash
main () {
	make_and_test_documentation;
	deploy_to_gh_pages;
}
make_and_test_documentation (){
	pipenv run make doctest;
	pipenv run make html;
}

# To be run after tests pass and build generated
deploy_to_gh_pages(){
	git checkout gh_pages;
	mv $ONSHAPE_CLIENTS_PATH/python/docs_rst/html/* /python/;
	git add python;
	git commit -m "Bringing up to date with $ONSHAPE_CLIENTS_VERSION";
	git push;
}