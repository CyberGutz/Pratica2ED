#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "evento.h"

int main(){
    setlocale(LC_ALL, "Pt-BR");
    ciclista *entrada;
    lista *li;
    fila *fw, *fy, *fb, *fg, *fp;     
    pilha *pw, *py, *pb, *pg, *pp;
    int option;

    //cria a lista
    crial(li);

    //cria as filas
    criaf(fw);         //branco (white)
    criaf(fy);         //amarelo (yellow)
    criaf(fb);         //azul (blue)
    criaf(fg);         //verde (green)
    criaf(fp);         //roxo (purple)

    //cria as pilhas
    criap(pw);
    criap(py);
    criap(pb);
    criap(pg);
    criap(pp);

    do
    {
        printf("*****EVENTO DE CICLISMO*****\n");
        printf("*                          *\n");
        printf("*    MENU:                 *\n");
        printf("*  1- Inserir ciclista     *\n");
        printf("*  2- Printar Lista        *\n");
        printf("*  3- Printar Pelotões     *\n");
        printf("*  4- Ver Vencedores       *\n");
        printf("*  0- Sair                 *\n");
        printf("Digite sua opção --->  ");
        scanf("%d*c",&option);

        switch (option)
        {
        case 0:
            printf("---> SAINDO <---\n\n");
        break;

        case 1:
            printf("Digite a Matrícula do ciclista ---> ");
            scanf("%d*c",&entrada->matricula);
            printf("Digite o Pelotão do ciclista ---> ");
            scanf("%s*c",entrada->pelotao);
            inserel(li, entrada);
        break;

        case 2:
            imprimel(*li);
        break;

        case 3:
            printf("\n---> Pelotão Branco: \n\n");
            imprimef(*fw);
            printf("---> Pelotão Amarelo: \n\n");
            imprimef(*fy);
            printf("---> Pelotão Azul: \n\n");
            imprimef(*fb);
            printf("---> Pelotão Verde: \n\n");
            imprimef(*fg);
            printf("---> Pelotão Roxo: \n\n");
            imprimef(*fp);
        break;
        
        default:
            printf("---> OPÇÃO INVÁLIDA <---\n\n");
        break;
        }

    } while (option!=0);
    





    return 0;
}