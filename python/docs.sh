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
	git checkout gh-pages;
	rm -rf ../python_html;
	mv  docs_rst/build/html/ ../python_html;
	git add ../python_html;
	git commit -m "Bringing python docs up to date with $ONSHAPE_CLIENTS_VERSION";
	git push origin HEAD;
	git checkout master;
	git reset --hard head;
}

main;