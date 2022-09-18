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

void inserel(lista *list, ciclista *ins){
    ciclista *temp;
    int i = list->primeiro;
    int j;

    if(list->ultimo == taml)
    {
        printf("---> Lista Cheia <---\n\n");
        return;
    }
    
    if(list->primeiro == list->ultimo){                      //SE A LISTA ESTIVER VAZIA, INSERE NA PRIMEIRA POSIÇÃO
        list->elemento[list->primeiro] = *ins;
        list->ultimo++;
    }

    else{
        while (ins->pelotao == list->elemento[i].pelotao)   //ACHA A POSIÇÃO CERTA PRO ELEMENTO 
            i++;

        for(j=i; j<list->ultimo; j++){                      //INSERE O CICLISTA NA ULTIMA POSIÇÃO DO PELOTÃO E REORGANIZA A LISTA
            *temp = list->elemento[j];
            list->elemento[j] = *ins;
            *ins = *temp;
        }

        if(strcmp(ins->pelotao, "branco")) 
            inseref(fw, ins);
        else if(strcmp(ins->pelotao, "amarelo")) 
            inseref(fy, ins);
        else if(strcmp(ins->pelotao, "azul")) 
            inseref(fb, ins);
        else if(strcmp(ins->pelotao, "verde")) 
            inseref(fg, ins);
        else
            inseref(fp, ins);

    }
}

void inseref(fila *queue, ciclista *ins){
    int i = queue->primeiro;
    int j;
    ciclista *temp, *temp2;
    
    if(queue->n == tamf){                   //SE A FILA ESTIVER CHEIA ELE NÃO INSERE
        printf("---> Fila cheia <---\n\n");
        return;
    }

    while(ins->matricula > queue->elemento[i].matricula)        //ACHA A POSIÇÃO CERTA PRA INSERÇÃO
        i++;
    
    if(i==queue->n){                                  //SE NENHUM ELEMENTO FOR MAIOR, INSERE NA ULTIMA POSIÇÃO DE UMA VEZ
        queue->elemento[i+1] = *ins;
        queue->ultimo++;
        queue->n++; 
    }
    else{                                           //SE NÃO, INSERE NA POSIÇÃO CERTA E ORGANIZA A FILA
        queue->ultimo++;
        queue->n ++;
        for(j=i; j<queue->n; j++){
            *temp = queue->elemento[j];
            queue->elemento[j] = *ins;  
            *ins = *temp;
        }
    }
}

void inserep(pilha *stack, fila *queue){
    int i, pos;

    for(i =0; i<stack->topo; i++){
        pos = rand()%queue->n;
        stack->elemento[i] = queue->elemento[pos];
    }
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

    for(i=queue.topo; i>0; i--){
        printf("%d° lugar:\n",i+1);
        printf("Matricula: %d\n",queue.elemento[i].matricula);
        printf("Pelotão: %s\n",queue.elemento[i].pelotao);
    }
}