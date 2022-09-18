#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "evento.h"

int main(){
    setlocale(LC_ALL, "Pt-BR");
    ciclista *entrada;
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

            //Verifica se o usuário não fez nenhuma entrada ilegal
            if((strcmp(entrada->pelotao, "branco"))!=0 || (strcmp(entrada->pelotao, "amarelo"))!=0 || (strcmp(entrada->pelotao, "azul"))!=0 || (strcmp(entrada->pelotao, "verde"))!=0 || (strcmp(entrada->pelotao, "roxo"))!=0)
                printf("---> Entrada inválida <---");
            
            else
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

        case 4: 
            //Gera os vencedores de todas os pelotões
            inserep(pw, fw);
            inserep(py, fy);
            inserep(pb, fb);
            inserep(pg, fg);
            inserep(pp, fp);
            //E imprime os vencedores de cada uma
            printf("\n---> Vencedores do Pelotão Branco: \n\n");
            imprimep(*pw);
            printf("\n---> Vencedores do Pelotão Amarelo: \n\n");
            imprimep(*py);
            printf("\n---> Vencedores do Pelotão Azul: \n\n");
            imprimep(*pb);
            printf("\n---> Vencedores do Pelotão Verde: \n\n");
            imprimep(*pg);
            printf("\n---> Vencedores do Pelotão Roxo: \n\n");
            imprimep(*pp);
        
        default:
            printf("---> OPÇÃO INVÁLIDA <---\n\n");
        break;
        }

    } while (option!=0);
    





    return 0;
}