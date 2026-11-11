set terminal pngcairo size 1000,650
set output "function-plot.png"
set title "A Simple Quadratic Function"
set xlabel "x"
set ylabel "y = x squared"
set grid
plot x*x title "y = x^2" linewidth 2
