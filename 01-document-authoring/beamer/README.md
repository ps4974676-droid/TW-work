# Beamer

Beamer is a LaTeX document class for making slide presentations. A presentation is divided into frames; each frame can contain text, lists, equations, columns, images or blocks.

## Open the example

The course example is [presentation.tex](../../03-beamer/presentation.tex). Compile it with a TeX distribution:

```bash
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

## Basic frame structure

```latex
\\begin{frame}{Slide title}
  \\begin{block}{Main point}
    Put the explanation here.
  \\end{block}
\\end{frame}
```

Keep one main idea on each slide. A slide should support the speaker, not contain the entire report.
