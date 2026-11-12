# LaTeX

LaTeX is used to prepare structured documents where consistent formatting, mathematical notation, tables, figures and references matter. The source describes the structure and formatting instructions; a TeX engine turns it into a PDF.

## Getting started

Install a TeX distribution such as TeX Live on Linux, MiKTeX on Windows or MacTeX on macOS. TeXstudio and Overleaf are common editing environments.

Start with [first-document.tex](examples/basics/first-document.tex). Run the following command from the examples/basics directory:

~~~bash
pdflatex first-document.tex
~~~

Some documents need more than one compilation pass to update their table of contents, labels or references.

## Topics from the course

| Topic | Example |
|---|---|
| Article and book classes | [article-vs-book.tex](examples/basics/article-vs-book.tex) |
| Sections and table of contents | [structure.tex](examples/document-structure/structure.tex) |
| Paper size, margins, headers and orientation | [page-styling.tex](examples/page-styling/page-styling.tex) |
| Font styles, alignment, colour and lists | [formatting.tex](examples/formatting/formatting.tex) |
| Equations, matrices, sums and cases | [mathematics.tex](examples/mathematics/mathematics.tex) |
| Tables, borders, merged cells and images | [tables-images.tex](examples/tables-and-images/tables-images.tex) |
| Labels, cross-references, bibliography and index | [references.tex](examples/references-and-index/references.tex) |
| A combined report | [report.tex](examples/complete-report/report.tex) |

The [quick reference](quick-reference.md) lists commands used throughout the examples.

## A few commands worth remembering

- \section{} and \subsection{} divide the document into readable parts.
- \textbf{}, \textit{} and \underline{} change text appearance.
- itemize and enumerate create lists.
- \label{} and \ref{} connect figures, tables and sections.
- \includegraphics{} inserts an image when the graphicx package is loaded.

## Reference

The course reference book is Leslie Lamport's *LaTeX: A Document Preparation System*, 2nd edition, Addison-Wesley, 1994. The [Overleaf Learn library](https://www.overleaf.com/learn) is useful for checking package syntax and examples.
