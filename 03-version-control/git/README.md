# Git

Git is a distributed version control system. It records changes to a project so that earlier versions can be inspected or restored and different lines of work can be developed separately.

## The basic cycle

```bash
git status
git add README.md
git diff --staged
git commit -m "docs: explain the project structure"
git log --oneline
```

A commit records the staged snapshot. It is good practice to inspect the staged changes before creating the commit.

## Branches

```bash
git switch -c docs/update-latex-guide
# make and test the changes
git add .
git commit -m "docs: expand the LaTeX guide"
git switch main
git merge docs/update-latex-guide
```

A branch keeps a change separate while it is being prepared. Merge it after reviewing and testing the work.

## Common commands

| Command | Purpose |
|---|---|
| `git init` | Start a repository |
| `git clone URL` | Copy a remote repository |
| `git status` | Inspect the working tree |
| `git add` | Stage changes |
| `git diff` | Review changes |
| `git commit` | Save a snapshot |
| `git log --oneline` | Read commit history |
| `git switch -c name` | Create and switch to a branch |
| `git merge name` | Merge a branch |
| `git pull` | Fetch and integrate remote changes |
| `git push` | Send local commits to a remote |

## If a merge conflict appears

Run `git status`, open each conflicted file, decide which lines should remain, remove the conflict markers, then stage the resolved files and complete the merge. Do not blindly choose one side without checking what the changes mean.

For the official reference, see [Git documentation](https://git-scm.com/doc).
