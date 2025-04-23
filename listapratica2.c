#include <stdio.h>
#include <math.h>
//nome: Lucas Andre de Oliveira Siqueira 
//Lista pratica 2 - exercicio 2
//Funcao : receber um numero inteiro de 3 digitos e informar se o numero satisfaz a relacao proposta no exercicio

int main(){

    //variaveis atribuidas ao programa

    int num , c,d,u,num2;

    //entrada do usuario

    printf("escreva o numero : ");
    scanf("%d",&num);
    
    

    

    
    if (num >= 100 && num <= 999) // verificar se o numero tem 3 digitos
    {
        c= num / 100;        //retorna a centena
        d=(num % 100) / 10;  //retorna a dezena
        u= num % 10;         //retorna a unidade
        
        num2=pow(c,3) + pow(d,3) + pow(u,3);
        if (num2 == num){
            printf("O numero satisfaz a relacao proposta no exercicio! "); //possivel saida do programa 
        }else{
            printf("o numero nao satisfaz a relacao proposta no exercicio"); //possivel saida do programa 
        }
    }else{
        printf("erro! o numenao nao tem 3 digitos!"); //possivel saida do programa
    }

    



    return 0;
}