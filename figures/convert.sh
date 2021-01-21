ls *svg |xargs -i inkscape {} --export-pdf={}.pdf
rename "s/.svg.pdf/.pdf/g" *pdf
