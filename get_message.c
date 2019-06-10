#include <stdio.h>

void getMessage(char *prompt, char *msg) {
    printf("%s\n> ", prompt);
    scanf("%[ a-zA-Z]s", msg);
}
