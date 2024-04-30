typedef struct No{
    char valor;
    struct No* next_no;
} No;

No* no(char valor, No* next_no);
void insert_no(No* H, No* no);
void print_lista(No* H);
int qtd_nos(No* H);
No* copy_lista(No* H);
void free_lista(No* H);
int lista_verify_ocorrencia (No* H, char valor_busca); /*2 - int lista_verificar_ocorrencias(No* L, char valor_busca): essa função deve retornar a quantidade de ocorrências de nós com o valor igual ao valor da busca;*/
int lista_verify_existencia(No* H, char valor_busca); /*1 - int lista_verificar_existencia(No* L, char valor_busca): essa função deve retornar 1 se existir algum nó da lista que possui o valor procurado ou 0 caso não exista;*/
void lista_print_inversa (No* H); /*3 - void lista_imprimir_inversa(No* L): essa função deve imprimir os valores dos nós da lista na ordem inversa;*/
void lista_insert_no_i(No* H, int i, No* no); /*void lista_inserir_no_i(No* L, int i): essa função deve inserir um nó na lista na posição i. A primeira posição da lista (nó cabeça) é equivalente ao índice 0;*/
void lista_remover_no_i(No* H, int i, No* no_ant); /*void lista_remover_no_i(No* L, int i): essa função deve remover o nó na posição i. A primeira posição da lista (nó cabeça) é equivalente ao índice 0;*/