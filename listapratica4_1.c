#include <stdio.h>
//NOME: LUCAS ANDRE DE OLIVEIRA SIQUEIRA 
//LISTA PRATICA 4 - ATIVIDADE 1
//O PROGRAMA TEM COMO ENTRADA 2 INTEIROS, ONDE X != 0 E Y >= 0, E ELE CALCULE X^Y 
//SEM USAR A FUNÇAO POW



int main(){
    int x,y;
    do{
        printf("digite x e y respectivamente: \n");
        scanf("%d %d",&x,&y); // entrada sao 2 numeros inteiros
        if(x != 0 && y >= 0 ){ // condicional que cada numero deve satisfazer para o codigo rodar
            int cont=x;
            
            for (int i = 1; i < y ; i++){ // x^y sem usar o comando pow 
                cont*=x;

            }
            printf("%d ^ %d = %d\n",x,y,cont); // possivel saida do programa

        }else{
            printf("entrada invalida!"); // possivel saida do programa
        }
        
    }while(x != 0 && y >= 0); // loop que se repete até as condiçoes nao serem satisfeitas

}