# Graph plotting with Gnuplot

Gnuplot is a command-line plotting program. It can draw functions and plot values stored in data files.

## Examples in this repository

- [marks.dat](../../04-graph-plotting/sample-data/marks.dat) contains a small two-column dataset.
- [marks.gp](../../04-graph-plotting/gnuplot/marks.gp) plots the sample marks.
- [function.gp](../../04-graph-plotting/gnuplot/function.gp) plots the function (y=x^2).

## Run the scripts

Install Gnuplot, open a terminal at the repository root and run:

```bash
gnuplot 04-graph-plotting/gnuplot/marks.gp
gnuplot 04-graph-plotting/gnuplot/function.gp
```

The scripts write PNG files to the current working directory. Open the generated images to check the labels, scale and plotted data.

## Useful settings

- `set title` gives the graph a title.
- `set xlabel` and `set ylabel` label the axes.
- `set grid` makes values easier to read.
- `set xrange` and `set yrange` control the visible range.
- `set output` chooses the output file.

For a data plot, check that the data file path is correct and that the selected columns contain the values you intend to plot.
