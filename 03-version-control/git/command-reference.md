# Git command reference

## Identity
```bash
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
git config --list
```

## Inspect and record changes
```bash
git status
git diff
git add README.md
git commit -m "docs: update project overview"
git log --oneline
```

## Branches and remotes
```bash
git switch -c feature/new-examples
git remote -v
git pull
git push -u origin feature/new-examples
```

## Undoing changes
```bash
git restore filename
git restore --staged filename
git revert COMMIT_ID
```
Use `git restore` carefully: it can discard local edits. `git revert` creates a new commit that reverses an earlier commit.
