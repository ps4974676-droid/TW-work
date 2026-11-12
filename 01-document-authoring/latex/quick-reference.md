# LaTeX quick reference

This is a short reminder of commands used in the examples. It is not a replacement for the package documentation.

| Task | Command or environment |
|---|---|
| Document type | \documentclass{article} |
| Load a package | \usepackage{graphicx} |
| Section | \section{Title} |
| Subsection | \subsection{Title} |
| Bold / italic | \textbf{...} / \textit{...} |
| Unordered list | itemize |
| Numbered list | enumerate |
| Inline mathematics | \( ... \) |
| Display mathematics | \[ ... \] |
| Equation number | equation |
| Table | tabular |
| Figure | figure |
| Insert an image | \includegraphics[width=...]{file} |
| Add a label | \label{key} |
| Refer to a label | \ref{key} |
| Add a citation | \cite{key} |

## Compilation reminders

- Compile from the folder containing the source file, or provide the correct relative path to included images.
- Run LaTeX again after adding or changing labels and cross-references.
- Keep generated files such as .aux, .log and .toc out of version control.
- Check that every image file used by \includegraphics is present.
