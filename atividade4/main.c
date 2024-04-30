#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char* argv[]){

    No* H = no('A', no('B', no('C', no('D', no('E', no('F', NULL))))));
    No* Hc = copy_lista(H);

    print_lista(H);
    printf("\n copia\n");
    print_lista(Hc);

    H->next_no->valor = 'E';
    Hc->valor = 'U';

    printf("\n");
    print_lista(H);
    printf("\n copia\n");
    print_lista(Hc);

    free_lista(Hc);
    
    printf("\n qtd = %d", qtd_nos(H));

    printf("\n E existe na lista? %d", lista_verify_existencia(H, 'E'));
    printf("\n E ocorre qnts vezes na lista? %d\n", lista_verify_ocorrencia(H, 'E'));

    lista_print_inversa(H);

    printf("\n");
    lista_insert_no_i(H, 2, no('J', NULL));
    print_lista(H);
    printf("\n");

    lista_remover_no_i(H, 6, NULL);
    print_lista(H);
    printf("\n");


    exit(0);
}