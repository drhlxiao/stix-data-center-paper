source=stix_data_center.tex
target= stix_data_center.pdf
$(target):$(source)
	pdflatex $(source)
	pdflatex $(source)
clean:
	rm -f *.log *.lot *.aux *.toc *.idx *.lof *.dvi *.ps *.blg *backup* *bak* *.png *pdf *spl *sav *gz *out


