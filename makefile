all: run

run:
	gcc morph.c -O3 -o morph
	./morph
