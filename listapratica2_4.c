#include <stdio.h>

#define MEDIA 5


    //NOME:LUCAS ANDRE DE OLIVEIRA SIQUEIRA 
    //LISTA PRATICA 3 - ATIVIDADE 4 
    //OBJETIVO DO EXERCICIO - deverá informar isso e terminar. Atividade 4: Escreva um programa que receba duas notas e compare a média aritmética
//                            destas com um valor constante igual a 5, que representa o limiar de aprovação. Caso a
//                            média seja maior ou igual ao limiar, informar “Aprovado”. Imprimir “Reprovado”




int main(){

    float n1,n2,media;

    printf("escreva as notas:");
    scanf("%f %f",&n1,&n2);
    media=(n1+n2)/2;
    if (media >= MEDIA){
        printf("aprovado!");
    }else{
        printf("reprovado!");
    }

    return 0;
}