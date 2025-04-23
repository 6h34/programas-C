#include <stdio.h>
//NOME: LUCAS ANDRE DE OLIVEIRA SIQUEIRA 
//LISTA PRATICA 4 - ATIVIDADE 2 e 3
//O PROGRAMA TEM COMO ENTRADA UM VALOR INTEIRO QUE DEVE RETORNAR A SEQUENCIA DE asteriscos.
//SEM USAR A FUNÇAO POW


int main(){

    int n;
    int i = 1;
    printf("escreva o numero de linhas:");
    scanf("%d",&n);
    if (n > 0 && n <= 10){ // os numeros nesse intervalo terao a sequencia de asteriscos em ordem decrescente
       int i = 0;
    while (i < n) {
        int j = 0;
        while (j < n - i) { //imprime o numero de asteriscos em ordem decrescente
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    }else if(n < 0 && -n <= 10) { // os numeros nesse intervalo terao a sequencia de asteriscos em ordem crescente
        int i = 1;
        while (i <= -n){
            int j = 0; 
            while (j < i){//imprime os asteriscos em ordem crescente
                printf("*");
                j++;
            }
            printf("\n");
            i++;
        }
        
    }else{
        printf("entrada invalida!"); //caso o numero nao faça parte do intervalo [-10  10],retorna essa mensagem
    }
        
}