helloWorld: ./helloWorld.c
	$(CC) helloWorld.c -o build/hello -Wall -Wextra -pedantic -std=c99
