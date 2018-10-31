git checkout master
git status
git init .
tag_name="Auto-$TRAVIS_BUILD_NUMBER"
echo "[INFO] Pushing the client with the tag:$tag_name";
git add .
git commit -m "Auto built by swagger"
git tag "Auto-$TRAVIS_BUILD_NUMBER" -a -m 'auto-pushed from Travis build $TRAVIS_BUILD_WEB_URL'
git remote add origin-auto_builds https://${GIT_TOKEN}@github.com/onshape-public/python-client.git
git push --follow-tags origin-auto_builds master 2>&1 | grep -v 'To https'
