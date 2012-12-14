all: main

main: init.o menu.o fileio.o src/main.c
	gcc -Wall build/init.o build/menu.o \
	build/fileio.o src/main.c -o bin/mrar -std=c99

init.o: src/init.c
	gcc -Wall -c src/init.c -o build/init.o \
	-std=c99

menu.o: src/menu.c
	gcc -Wall -c src/menu.c -o build/menu.o \
	-std=c99

fileio.o: src/fileio.c
	gcc -Wall -c src/fileio.c -o build/fileio.o \
	-std=c99

clean:
	rm -rf bin/*o main
