#include <stdio.h>
#include <stdlib.h>
#include "get_message.c"
#include "print_message.c"


int main(void) {
    char name[INPUT_MESSAGE_LENGTH];
    
    getMessage("What is your name?", name);
    
    printMessage(name);
    
    return EXIT_SUCCESS;
}
