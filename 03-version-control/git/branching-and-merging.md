# Branching and merging

A branch lets you work on a change without immediately modifying the main branch.

```bash
git switch main
git pull
git switch -c docs/add-latex-examples

# Make and review the changes.
git add .
git commit -m "docs: add LaTeX examples"
git push -u origin docs/add-latex-examples
```

Open a pull request on GitHub and review the proposed changes before merging.

## Merge locally

```bash
git switch main
git merge docs/add-latex-examples
```

## Resolve a conflict

1. Run `git status` to identify conflicted files.
2. Open each file and inspect the conflict markers.
3. Choose or combine the correct content.
4. Remove the markers and test the result.
5. Stage the resolved file and complete the merge commit.
