typedef struct Nopilha{
     char data;
     struct Nopilha* next;
} Nopilha;

void push_Nopilha(Nopilha** root, char data);
char pop_Nopilha(Nopilha** root);
char peek_Nopilha(Nopilha* root);
int isEmpty(Nopilha* root);
void display_Nopilha(Nopilha* root);