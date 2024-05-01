#include <stdio.h>
#include <stdlib.h>
#define registro 1024 /*max*/

typedef struct Data {
    int x;
    float y;
} Data;

int main(int argc, char* argv[]){

FILE *arq = fopen(argv[1], "r");
    if (arq== NULL) {
        printf("Erro ao abrir o arquivo %s\n", argv[1]);
        return 1;
    }

    int size = 0;
    char linhas[registro];
    while (fgets(linhas, sizeof(linhas), arq) != NULL) {
        size++;
    }

    Data *pts = (Data*) malloc(size * sizeof(Data));
    if (pts == NULL) {
        printf("Erro ao alocar registros na memória");
        return 1;
    }

    float x_soma = 0, y_soma = 0; 
    for (int i = 0; i < size; i++) {
        if (fgets(linhas, sizeof(linhas), arq) == NULL) {
            printf("Erro ao ler o arquivo");
            return 1;
        }
        sscanf(linhas, "%d,%f", &(pts[i].x), &(pts[i].y));
        x_soma += pts[i].x;
        y_soma += pts[i].y;
    }

    float x_media = (float)x_soma / size;
    float y_media = y_soma / size;

    float cal1 = 0, cal2 = 0;
    for (int i = 0; i < size; i++) {
        cal1 = (pts[i].x - x_media) * (pts[i].y - y_media); 
        cal2 = (pts[i].x - x_media) * (pts[i].x - x_media);
    }
    float incl = cal1 / cal2;
    
    float itcp = y_media - incl * x_media; 

    printf("\n y = %.2fx + %.2f\n", incl, itcp); 

    free(pts);

    fclose(arq);

    exit(0);
}
