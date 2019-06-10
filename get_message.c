#include <stdio.h>

const unsigned int INPUT_MESSAGE_LENGTH = 128;

void getMessage(char *prompt, char *msg) {
    
    printf("%s\n> ", prompt);
    scanf("%[ a-zA-Z]s", msg);

}
