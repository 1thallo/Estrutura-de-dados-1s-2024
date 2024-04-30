#include <stdio.h>
#include <stdlib.h>
#include "lista_circular.h"

No* no(char valor, No* next_no){
    No* no = malloc(sizeof(No));
    no->valor = valor;
    no->next_no = next_no;
    return no;
}

void insere_no(No* H, char valor){
    if (H != NULL){
        if(H->next_no == NULL){
            H-> next_no = no(valor, H);
    }
    else{
        No* tmp = H->next_no;
        while (tmp -> next_no != H){
            tmp = tmp -> next_no;
        }
        tmp -> next_no = no(valor, H);
    }
  }
}

void imprime_lista(No* H){
    if (H != NULL){
        printf("%c", H->valor);
        No* tmp = H->next_no;
        while (tmp != H & tmp != NULL){
            printf("%c", tmp->valor);
            tmp = tmp -> next_no;
        }
    }
}

void remove_no(No* H, char valor){
    if(H != NULL){
        No*tmp;
        No*tmp_ant;
        tmp=H-> next_no;
        tmp_ant=H;
        while (tmp != H & tmp != NULL){
            if(tmp->valor == valor){
                tmp_ant->next_no = tmp->next_no;
                free(tmp);
                tmp= tmp_ant->next_no;
            } 
            else{
                tmp_ant = tmp;
                tmp= tmp->next_no;
            }
        
        }
    }
}

void liberar_lista(No* H) {
    if (H == NULL) {
        return;
    }

    No* atual = H;
    No* next_no;

    do {
        next_no = atual->next_no;
        free(atual);
        atual = next_no;
    } while (atual != H);
}