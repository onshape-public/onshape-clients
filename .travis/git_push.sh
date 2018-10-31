#!/bin/sh
# ref: https://help.github.com/articles/adding-an-existing-project-to-github-using-the-command-line/
#
# Usage example: /bin/sh ./git_push.sh wing328 swagger-petstore-perl "minor update"

# parse options
#while getopts ":t:u:r:n:" opt; do
#  case $opt in
#    t)
#      echo "-t was triggered, Parameter: $OPTARG" >&2
#      tag_name=$OPTARG
#      ;;
#    u)
#      echo "-u was triggered, Parameter: $OPTARG" >&2
#      git_user_id=$OPTARG
#      ;;
#    r)
#      echo "-r was triggered, Parameter: $OPTARG" >&2
#      git_repo_id=$OPTARG
#      ;;
#    n)
#      echo "-n was triggered, Parameter: $OPTARG" >&2
#      release_note=$OPTARG
#      ;;
#    \?)
#      echo "Invalid option: -$OPTARG" >&2
#      exit 1
#      ;;
#    :)
#      echo "Option -$OPTARG requires an argument." >&2
#      exit 1
#      ;;
#  esac
#done

git_user_id=$1
git_repo_id=$2
release_note=$3
tag_name=$4

if [ "$git_user_id" = "" ]; then
    git_user_id="onshape-public"
    echo "[INFO] No command line input provided. Set \$git_user_id to $git_user_id"
fi

if [ "$git_repo_id" = "" ]; then
    git_repo_id="python-client"
    echo "[INFO] No command line input provided. Set \$git_repo_id to $git_repo_id"
fi

if [ "$release_note" = "" ]; then
    release_note="Auto built by Travis"
    echo "[INFO] No command line input provided. Set \$release_note to $release_note"
fi

if [ "$tag_name" = "" ]; then
    tag_name="built automatically by Travis"
    echo "[INFO] No command tag_name provided - Set \$tag_name to $tag_name"
fi

# Initialize the local directory as a Git repository
git init

# Adds the files in the local repository and stages them for commit.
git add .

# Commits the tracked changes and prepares them to be pushed to a remote repository. 
git commit -m "$release_note"

git tag $tag_name -a -m 'auto-pushed from Travis build'

# Sets the new remote
git_remote='https://github.com/onshape-public/python-client.git'
if [ "$git_remote" = "" ]; then # git remote not defined

    if [ "$GIT_TOKEN" = "" ]; then
        echo "[INFO] \$GIT_TOKEN (environment variable) is not set. Using the git credential in your environment."
        git remote add origin https://github.com/${git_user_id}/${git_repo_id}.git
    else
        git remote add origin https://${git_user_id}:${GIT_TOKEN}@github.com/${git_user_id}/${git_repo_id}.git
    fi

fi

git pull origin master

# Pushes (Forces) the changes in the local repository up to the remote repository
echo "Git pushing to https://github.com/${git_user_id}/${git_repo_id}.git"
git push --follow-tags origin master 2>&1 | grep -v 'To https'

