#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "pilha.h"

void push_Nopilha(Nopilha** root, char data){
    Nopilha* nopilha = malloc(sizeof(Nopilha));
    nopilha->data = data;
    nopilha->next = *root;
    *root = nopilha;
}

char pop_Nopilha(Nopilha** root){
    if(isEmpty(*root)){
        return CHAR_MIN;
    } 
    Nopilha* tmp = *root;
    *root = tmp->next;
    char tmpData = tmp->data;
    free(tmp);
    return tmpData;
}

char peek_Nopilha(Nopilha* root){
    if(isEmpty(root)){
        return CHAR_MIN;
    }
    return root->data;
}

int isEmpty(Nopilha* root){
    return root == NULL;
}

void display_Nopilha(Nopilha* root){
    Nopilha* tmp = root;
    while (tmp != NULL){
        printf ("%c ->", tmp -> data);
        tmp = tmp -> next;
    }
    printf("NULL\n");
}