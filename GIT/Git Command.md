#git

### Setup and Configuration

- `git config --global user.name "[name]"`: Set your name to be used for all commits in the current repository.
- `git config --global user.email "[email address]"`: Set your email to be used for all commits in the current repository.

### Starting and Cloning Repositories

- `git init`: Initialize a new Git repository.
- `git clone [url]`: Clone (download) a repository from an existing URL.

### Basic Snapshotting

- `git status`: Check the status of changes as untracked, modified, or staged.
- `git add [file]`: Add a file as it looks now to your next commit (stage).
- `git add .` or `git add -A`: Stage all changes.
- `git commit -m "[descriptive message]"`: Commit your staged content as a new commit snapshot.
- `git commit --amend`: Modify and add changes to the most recent commit.
- `git rm [file]`: Remove a file from the working directory and stage the deletion.
- `git mv [original file] [new file]`: Move or rename a file, directory, or symlink.

### Branching and Merging

- `git branch`: List your branches. An asterisk will appear next to the currently active branch.
- `git branch [branch-name]`: Create a new branch.
- `git checkout -b [branch-name]`: Create a new branch and switch to it.
- `git checkout [branch-name]`: Switch from one branch to another.
- `git branch -d [branch-name]`: Delete the specified branch.
- `git merge [branch]`: Merge the specified branch’s history into the current one.
- `git mergetool`: Use a configured merge tool to resolve merge conflicts.
- `git log`: Show the commit history for the currently active branch.

### Sharing and Updating Projects

- `git fetch [alias]`: Download all changes from `[alias]`, but don't integrate into HEAD.
- `git pull [alias] [branch]`: Download changes and directly merge/integrate into HEAD.
- `git push [alias] [branch]`: Upload all local branch commits to GitHub.
- `git push --tags`: Push tags to remote repository.

### Inspection and Comparison

- `git log`: Show the commit history for the currently active branch.
- `git log branchB..branchA`: Show the commits on branchA that are not on branchB.
- `git log --follow [file]`: Show the commits that changed file, even across renames.
- `git diff [first-branch]...[second-branch]`: Show content differences between two branches.
- `git show [commit]`: Output metadata and content changes of the specified commit.

### Patching

- `git apply [patch]`: Apply a patch from a file or STDIN.
- `git cherry-pick [commit]`: Apply the changes introduced by some existing commits.

### Stashing and Cleaning

- `git stash`: Temporarily store modified, tracked files in order to change branches.
- `git stash pop`: Apply stashed changes back to your working directory.
- `git stash list`: List all stashed changesets.
- `git stash drop`: Discard the most recently stashed changeset.
- `git clean`: Remove untracked files from your working directory.

### Tagging

- `git tag`: List all tags.
- `git tag [tag]`: Create a new tag.
- `git tag -d [tag]`: Delete a tag.

### Git Internals

- `git gc`: Clean up unnecessary files and optimize the local repository.
- `git fsck`: Perform a consistency check of the filesystem.
- `git reflog`: Show a log of changes to the local repository’s HEAD.