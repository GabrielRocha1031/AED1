#include <stdio.h>
#include <stdlib.h>

struct agenda{
    char nome[30];
    int telefone;
    agenda *prox;
}typedef agenda agenda;
agenda *start
insere(*p);
lista(*p);

int main(){
int op;
do{
    pritnf("Informe uma opcao:\n");
    printf("1 - Adicionar\n");
    printf("2 - listar\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
    insere(*p);
        break;
    case 2:
    lista(*p);
        break;
    }
}

return 0;
}
void insere(*p)
{
    agenda *p;
    p=(agenda *)malloc(sizeof(agenda));
    if(p == NULL){
        printf("Não foi possivel alocar espaço");
    }
    printf("Informe o nome:\n");
    scanf("%s",p->nome);
    printf("Informe o telefone:\n");
    scanf("%d",p->telefone);
}