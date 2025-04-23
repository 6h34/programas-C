#include <stdio.h>

//nome: Lucas Andre de Oliveira Siqueira 
// exercicio 1 - problema 1
//Funcao : descobrir se o numero faz parte do intervalo e fazer a alteracao caso necessario


int main(){

    
    float x;

    //entrada do usuario
    printf("escreva o numero indicado: ");
    scanf("%f",&x);
    
    //verificar se o numeor faz parte do intervalo
    if (x >= 9.0 && x <= 9.5){
        x=9.5;
        printf("numero alterado! %0.2f",x); //retornar o numero alterado 


    }else{
        printf("numero %f",x); //retornar o mesmo numero
    }
    return 0;
}