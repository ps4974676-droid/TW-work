# Graph plotting with Gnuplot

Gnuplot is a command-line plotting program. It can draw functions and plot values stored in data files.

## Examples in this repository

- [marks.dat](examples/sample-data/marks.dat) contains a small two-column dataset.
- [marks.gp](examples/gnuplot/marks.gp) plots the sample marks.
- [function.gp](examples/gnuplot/function.gp) plots the function y = x squared.

## Run the scripts

Install Gnuplot, open a terminal at the repository root and run:

~~~bash
gnuplot 01-document-authoring/graph-plotting/examples/gnuplot/marks.gp
gnuplot 01-document-authoring/graph-plotting/examples/gnuplot/function.gp
~~~

The scripts write PNG files to the current working directory. Open the generated images to check the labels, scale and plotted data.

## Useful settings

- set title gives the graph a title.
- set xlabel and set ylabel label the axes.
- set grid makes values easier to read.
- set xrange and set yrange control the visible range.
- set output chooses the output file.

For a data plot, check that the data file path is correct and that the selected columns contain the values you intend to plot.
