#include <stdio.h>
#include <stdlib.h>

int main (int argc, char*argv[]){

int qtd = argc - 1; 
int soma = 0;
int menor = atoi (argv[1]);
int maior = atoi(argv[1]);
float media = 0;
int vetor [qtd];

for (int i = 1; i <= qtd; i++){
        int n = atoi(argv[i]);
        vetor[i-1] = n;
        soma += n;

    if (menor > n){
        menor = n;
    } 

    if (n > maior){
        maior = n;
    }
    }

    media = (float)soma/qtd;

    printf("Quantidade de numeros recebidos: %d\n", qtd);
    printf("Valor medio dos numeros: %.1f\n", media);
    printf("Menor numero: %d\n", menor);
    printf("Maior numero: %d\n", maior);

    for (int i =0; i < qtd-1; i++){
       for (int j = i; j < qtd; j++){
            if(vetor[i] > vetor[j]){
                int aux = vetor[j];
                vetor[j]= vetor[i];
                vetor[i] = aux;
            }
        }
    }

    for (int i = 0; i < qtd; i++){
        printf("%d ", vetor[i]);
    }
    return(0);
}
  