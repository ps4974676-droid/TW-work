# LaTeX

LaTeX is used to prepare structured documents where consistent formatting, mathematical notation, tables, figures and references matter. Unlike a word processor, the source describes the structure and formatting instructions; a TeX engine turns that source into a PDF.

## Getting started

Install a TeX distribution such as TeX Live on Linux, MiKTeX on Windows or MacTeX on macOS. You can write the source in TeXstudio or use Overleaf in a browser.

The first file to try is [first-document.tex](../../02-latex/basics/first-document.tex).

```bash
pdflatex first-document.tex
```

Run the command from the folder containing the file. Some documents need more than one compilation pass to update their table of contents, labels or references.

## Topics from the course

| Topic | Example |
|---|---|
| Article and book classes | [article-vs-book.tex](../../02-latex/basics/article-vs-book.tex) |
| Sections and table of contents | [structure.tex](../../02-latex/document-structure/structure.tex) |
| Paper size, margins, headers and orientation | [page-styling.tex](../../02-latex/page-styling/page-styling.tex) |
| Font styles, alignment, colour and lists | [formatting.tex](../../02-latex/formatting/formatting.tex) |
| Equations, matrices, sums and cases | [mathematics.tex](../../02-latex/mathematics/mathematics.tex) |
| Tables, borders, merged cells and images | [tables-images.tex](../../02-latex/tables-and-images/tables-images.tex) |
| Labels, cross-references, bibliography and index | [references.tex](../../02-latex/references-and-index/references.tex) |
| A combined report | [report.tex](../../02-latex/complete-report/report.tex) |

## A few commands worth remembering

- `\\section{}` and `\\subsection{}` divide the document into readable parts.
- `\\textbf{}`, `\\textit{}` and `\\underline{}` change text appearance.
- `\\begin{itemize}` and `\\begin{enumerate}` create lists.
- `\\label{}` and `\\ref{}` connect figures, tables and sections.
- `\\includegraphics{}` inserts an image when the `graphicx` package is loaded.

## Reference

The course reference book is Leslie Lamport's *LaTeX: A Document Preparation System*, 2nd edition, Addison-Wesley, 1994. The [Overleaf Learn library](https://www.overleaf.com/learn) is useful for checking package syntax and examples.
