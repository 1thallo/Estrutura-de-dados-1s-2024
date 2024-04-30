#include <stdio.h>
#include <stdlib.h>
#include "lista_circular.h"

int main(int argc, char**argv[]) {
    No*H = no('A', NULL);
    insere_no(H, 'B');
    insere_no(H, 'C');

    printf("Lista: ");
    imprime_lista(H);
    printf("\n");

    remove_no(H, 'B');
    printf("Lista: ");
    imprime_lista(H);
    printf("\n");

    remove_no(H, 'C');
    printf("Lista: ");
    imprime_lista(H);
    printf("\n");

    liberar_lista(H);

    
exit(0);
}