#include <stdio.h>
#include <stdlib.h>

char *getMessage(void);

int main(void) {
    printf("%s\n", getMessage());
    
    return EXIT_SUCCESS;
}


char *getMessage(void) {
    char *msg = "Hello world";
    
    return msg;
}
