# Graph plotting with Gnuplot

Gnuplot is a command-line program for plotting data and mathematical functions.

## Included files
- `sample-data/marks.dat`: a small two-column dataset.
- `gnuplot/marks.gp`: plots the sample marks.
- `gnuplot/function.gp`: plots a quadratic function.

Run the scripts from the repository root:

```bash
gnuplot 04-graph-plotting/gnuplot/marks.gp
gnuplot 04-graph-plotting/gnuplot/function.gp
```

The scripts save PNG files in the current working directory. If your installation does not support the `pngcairo` terminal, choose another terminal supported by your Gnuplot build.

Common commands include `set title`, `set xlabel`, `set ylabel`, `set grid`, `set output` and `plot`.
