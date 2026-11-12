# GitHub

GitHub is a hosting and collaboration platform for Git repositories. Git is the version control system; GitHub provides a remote place to store the repository and tools for working with other people.

## Publish an existing local project

Create an empty repository on GitHub, then connect it from the project folder:

```bash
git remote add origin https://github.com/USERNAME/REPOSITORY.git
git branch -M main
git push -u origin main
```

Replace the URL with the address of your own repository. If a remote already exists, inspect it with `git remote -v` rather than adding another one.

## Features used in coursework

- **Repository:** stores project files and their history.
- **README:** explains what the project contains and where to start.
- **Issues:** records bugs, questions and tasks.
- **Pull requests:** proposes changes for review before merging.
- **Forks:** make a copy of another repository under your account.
- **Collaborators:** allow selected people to contribute.
- **.gitignore:** prevents generated or local-only files from being tracked.

## A simple collaboration workflow

1. Clone the repository.
2. Create a branch for the task.
3. Make a focused change and commit it.
4. Push the branch to GitHub.
5. Open a pull request and explain what changed.
6. Review feedback, make corrections and merge when ready.

Never commit passwords, API keys, access tokens or private documents. Check repository visibility and sharing permissions before publishing coursework.

See GitHub Docs for the current interface and feature details.
