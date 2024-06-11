#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(int argc, char** argv[]){
    
    Nopilha* top = NULL;

    push_Nopilha(&top, 'A');
    push_Nopilha(&top, 'B');
    push_Nopilha(&top, 'C');

    display_Nopilha(top);

    printf("%c \n", pop_Nopilha(&top));

    display_Nopilha(top);

    printf("%c \n", peek_Nopilha(top));

    printf("%c ", pop_Nopilha(&top));
    printf("%c ", pop_Nopilha(&top));

    exit(0);
}