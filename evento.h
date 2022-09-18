#ifndef EVENTO_H
#define EVENTO_H
#define taml 500
#define tamf taml/5

typedef struct ciclista{
    int matricula;
    char pelotao[15];
}ciclista;

typedef struct lista{
    int primeiro, ultimo;
    ciclista elemento[taml];
}lista;

typedef struct fila{
    ciclista elemento[tamf];
    int primeiro, ultimo, n;
}fila;

typedef struct pilha{
    ciclista elemento[5];
    int topo;
}pilha;

void crial(lista *list);
void criaf(fila *queue);
void criap(pilha *stack);

void inserel(lista *list, ciclista *elemento);
void inseref(fila *queue, ciclista *elemento);
void inserep(pilha *stack, ciclista *elemento);

void imprimel(lista list);
void imprimef(fila queue);
void imprimep(pilha queue);

#endif