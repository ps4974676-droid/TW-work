# Beamer

Beamer is a LaTeX document class for making slide presentations. A presentation is divided into frames; each frame can contain text, lists, equations, columns, images or blocks.

## Open the example

The course example is `examples/presentation.tex`. Compile it from the examples folder:

```bash
cd 01-document-authoring/beamer/examples
pdflatex presentation.tex
pdflatex presentation.tex
```

The output is a PDF slide deck.

## Features shown in the example

- A title slide and an outline generated from sections.
- Separate frames for individual topics.
- A theme to keep the slide design consistent.
- Two-column layouts for comparing related ideas.
- Block and alert-block environments for grouping important content.
- Lists and mathematical expressions.

The `slide-planning.md` file contains a suggested presentation sequence.

Keep one main idea on each slide. A slide should support the speaker, not contain the entire report.
