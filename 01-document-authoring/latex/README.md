# LaTeX

LaTeX is used to prepare structured documents where consistent formatting, mathematical notation, tables, figures and references matter. The source describes the structure and formatting instructions; a TeX engine turns it into a PDF.

## Getting started

Install a TeX distribution such as TeX Live on Linux, MiKTeX on Windows or MacTeX on macOS. TeXstudio and Overleaf are common editing environments.

Start with the file `examples/basics/first-document.tex`. Run the following command from the examples/basics directory:

```bash
pdflatex first-document.tex
```

Some documents need more than one compilation pass to update their table of contents, labels or references.

## Topics from the course

| Topic | Example file |
|---|---|
| Article and book classes | `examples/basics/article-vs-book.tex` |
| Sections and table of contents | `examples/document-structure/structure.tex` |
| Paper size, margins, headers and orientation | `examples/page-styling/page-styling.tex` |
| Font styles, alignment, colour and lists | `examples/formatting/formatting.tex` |
| Equations, matrices, sums and cases | `examples/mathematics/mathematics.tex` |
| Tables, borders, merged cells and images | `examples/tables-and-images/tables-images.tex` |
| Labels, cross-references, bibliography and index | `examples/references-and-index/references.tex` |
| A combined report | `examples/complete-report/report.tex` |

The `quick-reference.md` file lists commands used throughout the examples.

## A few commands worth remembering

- \section{} and \subsection{} divide the document into readable parts.
- \textbf{}, \textit{} and \underline{} change text appearance.
- itemize and enumerate create lists.
- \label{} and \ref{} connect figures, tables and sections.
- \includegraphics{} inserts an image when the graphicx package is loaded.

## Reference

The course reference book is Leslie Lamport's *LaTeX: A Document Preparation System*, 2nd edition, Addison-Wesley, 1994. The Overleaf Learn library is also useful for checking package syntax and examples.

## Assignment 6 screenshots

Browse the [TeXstudio-style screenshot gallery](screenshots/README.md) for recreated examples covering fonts, paragraph spacing, equations, boxes, index generation and bibliography. These are illustrative recreations, not original lab-session captures.
