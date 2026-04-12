#include <stdio.h>
#include <stdlib.h>

#define MAXTAM 5
#define ITEM int
#define ERRO -1

#define true 1
#define false 0


typedef struct FilaEstaticaCircular{
    ITEM lista[MAXTAM];
    int comeco;
    int fim;
    int tamanho;
}FilaEstaticaCircular;

void inicia(FilaEstaticaCircular *L);
int enfilera(FilaEstaticaCircular *L, ITEM x);
ITEM desenfilera(FilaEstaticaCircular *L);
int vazia(FilaEstaticaCircular *L);
int cheia(FilaEstaticaCircular *L);
void mostra(FilaEstaticaCircular L);



