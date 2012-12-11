all: main

main: init.o menu.o fileio.o src/main.c
	gcc -Wall build/init.o src/main.c -o bin/mrar

init.o: src/init.c
	gcc -Wall -c src/init.c -o build/init.o

menu.o: src/menu.c
	gcc -Wall -c src/menu.c -o build/menu.o

fileio.o: src/fileio.c
	gcc -Wall -c src/fileio.c -o build/fileio.o

clean:
	rm -rf bin/*o main
