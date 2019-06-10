CC=gcc
OUTPUT=a.out

default: run

run: main.c print_message.c get_message.c
	$(CC) -o $(OUTPUT) main.c print_message.c get_message.c
