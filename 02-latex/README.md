# LaTeX examples

LaTeX is a document preparation system. It is particularly useful when a document needs consistent structure, mathematical notation, automatic numbering and cross-references.

## Setup

Install a TeX distribution such as TeX Live (Linux), MiKTeX (Windows) or MacTeX (macOS). TeXstudio and Overleaf are two common editing environments. See the [LaTeX Project](https://www.latex-project.org/get/) and [Overleaf Learn](https://www.overleaf.com/learn) for current installation and usage instructions.

## Examples in this section

- `basics/`: first document and article/book classes.
- `document-structure/`: title, abstract, sections and table of contents.
- `page-styling/`: paper size, margins, orientation, headers and footers.
- `formatting/`: text styles, colours, alignment and lists.
- `mathematics/`: equations, matrices, sums and piecewise functions.
- `tables-and-images/`: borders, merged cells, tables and figures.
- `references-and-index/`: labels, cross-references, bibliography and index.
- `complete-report/`: an integrated report template.

## Compile

For most examples:

```bash
pdflatex filename.tex
```

Run LaTeX again when references or the table of contents need updating. For a BibTeX document, the usual sequence is LaTeX, BibTeX, then LaTeX twice. For an index, run `makeindex filename.idx` and compile again.

Start with `basics/first-document.tex`.
