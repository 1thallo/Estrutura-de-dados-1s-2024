typedef struct No{
    char valor;
    struct No* next_no;
} No;

No* no(char valor, No* next_no);
void insere_no(No* H, char valor);
void imprime_lista(No* H);
void remove_no(No* H, char valor);
void liberar_lista(No* H);