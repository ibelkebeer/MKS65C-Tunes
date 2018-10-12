all: tester.o linkedlist.o
	gcc tester.o
	./a.out

linkedlist.o: linkedlist.c
	gcc -c linkedlist.c

tester.o: tester.c
	gcc -c tester.c
