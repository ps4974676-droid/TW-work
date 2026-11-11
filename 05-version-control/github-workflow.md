# Publishing a project on GitHub

1. Sign in to GitHub and select **New repository**.
2. Choose a descriptive name and add a short description.
3. Select the visibility required for the project.
4. If the project already exists locally, avoid creating a second README on GitHub.
5. Add the remote and push the local branch.

```bash
git remote add origin https://github.com/USERNAME/REPOSITORY.git
git branch -M main
git push -u origin main
```

GitHub features used in a typical coursework repository:

- **README:** explains the purpose and structure.
- **Issues:** records tasks and problems.
- **Pull requests:** proposes changes for review.
- **.gitignore:** keeps generated files out of version control.
- **License:** explains how others may reuse the work.

Before sharing the repository, check its README, links, source files and commit history. Do not commit passwords, tokens or private information.
