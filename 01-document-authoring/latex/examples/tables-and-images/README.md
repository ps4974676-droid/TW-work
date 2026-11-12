# Tables and images example

The LaTeX source in this folder demonstrates bordered tables, a shaded heading row, vertically and horizontally merged cells, and a figure with a caption and label.

Compile with:

~~~bash
pdflatex tables-images.tex
~~~

The source compiles even when diagram.png has not been added: it displays a placeholder in that case. To use your own image, put a file named diagram.png beside the .tex file and compile again.

The example uses the graphicx, multirow, xcolor, colortbl and float packages.
