target=data_center.pdf
#DEPS = hellomake.h
#OBJ = hellomake.o hellofunc.o

%.pdf: %.tex
	pdflatex $<

data_center.pdf: data_center.tex
	pdflatex data_center.tex
	evince data_center.pdf
clean:
	rm data_center.pdf