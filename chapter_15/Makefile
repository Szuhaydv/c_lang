demo: demo.o f1.o f2.o
	gcc -o demo demo.o f1.o f2.o

demo.o: demo.c f1.h
	gcc -c demo.c

f1.o: f1.c f1.h f2.h
	gcc -c f1.c

f2.o: f2.c f1.h f2.h
	gcc -c f2.c
