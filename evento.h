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

//As variáveis das estruturas são globais, de modo que as funções consigam acessar a estrutura de outra
lista *li;
fila *fw, *fy, *fb, *fg, *fp;     
pilha *pw, *py, *pb, *pg, *pp;

void crial(lista *list);
void criaf(fila *queue);
void criap(pilha *stack);

void inserel(lista *list, ciclista *ins);
void inseref(fila *queue, ciclista *ins);
void inserep(pilha *stack, fila *queue);

void imprimel(lista list);
void imprimef(fila queue);
void imprimep(pilha queue);

#endif