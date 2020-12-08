source=chess.tex
target= chess.pdf
$(target):$(source)
	pdflatex $(source)
	pdflatex $(source)
clean:
	rm -f *.log *.lot *.aux *.toc *.idx *.lof *.dvi *.ps *.blg *backup* *bak* *.png *pdf *spl *sav *gz *out


