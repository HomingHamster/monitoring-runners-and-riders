all: main

main: src/main.c
	gcc src/main.c -o bin/main

clean:
	rm -rf bin/*o main
