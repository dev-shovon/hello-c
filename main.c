#include <stdio.h>
#include <stdlib.h>
#include "get_message.c"
#include "print_message.c"

int main(void) {
    printMessage(getMessage());
    
    return EXIT_SUCCESS;
}
