CC=gcc
OUTPUT=message-printer

default: run

print_message.o: print_message.h print_message.c
	$(CC) -c -o print_message.o print_message.c

get_message.o: get_message.h get_message.c
	$(CC) -c -o get_message.o get_message.c

run: main.c print_message.o get_message.o
	$(CC) -o $(OUTPUT) main.c print_message.o get_message.o

clean:
	rm $(OUTPUT) get_message.o print_message.o && echo "cleaned"