#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

No* no(char valor, No* next_no){
    No* no = malloc(sizeof(No));
    no->valor = valor;
    no-> next_no = next_no;
    return no;
}

void insert_no(No* H, No* no){
    if( H != NULL){
        if( H-> next_no == NULL){
            H-> next_no = no;
        }
        else{
            insert_no(H-> next_no, no);
        }
    }
}

void print_lista(No* H){
    if(H != NULL){
        printf("%c ", H->valor);
        print_lista(H-> next_no);
    }
}

int qtd_nos(No* H){
    if( H != NULL){
        return 1 + qtd_nos(H-> next_no);
    }
    return 0;
}

No* copy_lista(No* H){
   if(H != NULL){
        return no(H->valor, copy_lista(H-> next_no));
   }
   return NULL; 
}

void free_lista(No* H){
    if(H != NULL){
        free_lista(H-> next_no);
        free(H);
    }
}

int lista_verify_existencia(No* H, char valor_busca){
    if(H != NULL){
        if(H->valor == valor_busca){
            return 1;
        }
        return lista_verify_existencia(H-> next_no, valor_busca);
    }
    return 0;
}

int lista_verify_ocorrencia(No* H, char valor_busca){
    if(H != NULL){
        if(H->valor == valor_busca){
            return 1 + lista_verify_ocorrencia(H-> next_no, valor_busca);
        }
        return 0 + lista_verify_ocorrencia(H-> next_no, valor_busca);
    }
    return 0;
}

void lista_print_inversa(No* H){
    if(H != NULL){
        lista_print_inversa(H-> next_no);
        printf("%c ", H->valor);
    }
}

void lista_insert_no_i(No* H, int i, No* no){
    if (H != NULL & i > 0){
        if(i == 1){
            no-> next_no = H-> next_no;
            H-> next_no  = no;
        }
        else
        {
            lista_insert_no_i(H-> next_no, i-1, no);
        }
        
    }
}

void lista_remover_no_i(No* H, int i, No* no_ant){
    if(H != NULL){
        if(i == 0 & no_ant != NULL){
            no_ant-> next_no = H-> next_no;
            free(H);
        }
        else{
            lista_remover_no_i(H-> next_no, i-1, H);
        }
    }
}