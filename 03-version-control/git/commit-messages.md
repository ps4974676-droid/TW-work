# Writing useful commit messages

A commit message should tell a reader what changed. It should be short enough to scan but specific enough to make sense in the project history.

## A simple format

~~~text
type: short description
~~~

Common types:

- docs: documentation or README changes.
- feat: a new example or capability.
- fix: a correction to existing material.
- refactor: reorganizing files without changing their purpose.
- test: adding or updating checks.

## Examples for this repository

- docs: explain page layout options in LaTeX
- feat: add a Beamer example with two-column frames
- fix: correct the sample data path in Gnuplot
- refactor: group course guides by topic

Avoid messages such as update, changes, final or done; they do not explain what the commit contains.

Before committing, inspect git diff --staged so the message accurately describes the staged changes.
