#include <stdio.h>
#include <stdlib.h>
#include "evento.h"

void crial(lista *list){
    list->primeiro = 0;
    list->ultimo = list->primeiro;
}

void criaf(fila *queue){
    queue->primeiro = 0;
    queue->ultimo = queue->primeiro;
}

void criap(pilha *stack){
    stack->topo = 0;
}



void imprimel(lista list){
    int i;

    for(i = list.primeiro; i<list.ultimo; i++){
        printf("\nPelotão: %s\n",list.elemento[i].pelotao);
        printf(" Matricula: %d\n",list.elemento[i].pelotao);
    }
}

void imprimef(fila queue){
    int i;

    for(i=queue.primeiro; i<queue.n; i++){
        printf("Matricula: %d",queue.elemento[i].matricula);
    }
}

void imprimep(pilha queue){
    int i;

    for(i=queue.topo; i>0; i++){
        printf("%d° lugar:\n",i);
        printf("Matricula: %d\n",queue.elemento[i].matricula);
        printf("Pelotão: %s\n",queue.elemento[i].pelotao);
    }
}