# Git and GitHub

Git is a distributed version control system. GitHub hosts Git repositories and adds tools for collaboration, review and project tracking.

## Git and GitHub are not the same thing
Git records changes in a repository. GitHub stores a remote copy and provides features such as pull requests, issues and code review. Local Git history can be used without an internet connection.

## A basic workflow
```bash
git init
git status
git add .
git commit -m "docs: add project notes"
git branch -M main
git remote add origin https://github.com/USERNAME/REPOSITORY.git
git push -u origin main
```
Replace the URL with the address of your own repository.

## Commands worth knowing
| Command | Use |
|---|---|
| `git status` | Check the working tree |
| `git add file` | Stage a file |
| `git commit -m "message"` | Record a snapshot |
| `git log --oneline` | Inspect commit history |
| `git diff` | Review unstaged changes |
| `git switch -c name` | Create and switch to a branch |
| `git merge name` | Merge a branch |
| `git pull` | Fetch and integrate remote changes |
| `git push` | Send commits to the remote |

See [Git command reference](git-commands.md), [branching and merging](branching-and-merging.md) and [GitHub workflow](github-workflow.md).
