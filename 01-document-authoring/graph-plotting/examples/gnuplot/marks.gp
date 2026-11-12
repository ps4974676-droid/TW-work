set terminal pngcairo size 1000,650
set output "marks-plot.png"
set title "Sample Marks Across Assessments"
set xlabel "Assessment Number"
set ylabel "Marks"
set grid
set key off
set yrange [0:100]
plot "01-document-authoring/graph-plotting/examples/sample-data/marks.dat" using 1:2 with linespoints linewidth 2 pointtype 7
