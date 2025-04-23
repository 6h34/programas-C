#include <stdio.h>
    //NOME:LUCAS ANDRE DE OLIVEIRA SIQUEIRA 
    //LISTA PRATICA 3 - ATIVIDADE 2 
    //OBJETIVO DO EXERCICIO - Resolver os exercicios propostos:


int main(){

    //ATIVIDADE 2 - LETRA A - receber um inteiro e retornar -1 se ele for par e 1 se ele for ímpar;

    int x;
    int par;

    printf("ATIVIDADE 1 \ndigite um valor: \n");
    scanf("%d",&x);
    par = ( x % 2 == 0 ) ?  -1 : 1 ;

    printf( "%d\n",par);

    //ATIVIDADE 2 - LETRA B - receber um racional e retornar 1 se ele for positivo e 0 caso contrário;

    float a,racional;
    printf(" digite um valor racional:\n");
    scanf("%f",&a);
    printf("\n");
    racional=(a > 0) ? 1 : 0;
    printf("%.0f\n",racional);

    //ATIVIDADE 2 - LETRA C - receber três racionais e retornar o maior deles;

    int n1,n2,n3,absoluto;

    printf("escreva os 3 numeros:\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    absoluto=(n1 < n2 ) ? (n2 < n3) ? n2 : n3 : n1;
    printf("\n");
    printf("o maior valor e %d\n",absoluto);

    //ATIVIDADE 2 - LETRA D - receber três racionais e retornar a média aritmética dos dois maiores;

    float r1,r2,r3,men;
    printf("escreva 3 numeros:\n");
    scanf("%f",&r1);
    scanf("%f",&r2);
    scanf("%f",&r3);
    men=(r1 <= r2 && r1 <= r3) ? (r2+r3)/2 : (r2 <= r1 && r2 <= r3) ? (r1 + r3) / 2: (r1 + r2) /2 ;
    printf("a media é: %0.1f\n",men);

    //ATIVIDADE 2 - LETRA E - receber um caractere e retornar:
    //                       'm’ se ele for uma letra minúscula do alfabeto; 
    //                        M’ se ele for uma letra maiúscula do alfabeto;
    //                       ‘?’ se for um outro caractere qualquer.
    char ch, resultado;

    printf("Digite um caractere: \n");
    scanf(" %c", &ch); // 

    resultado = (ch >= 'a' && ch <= 'z') ? 'm' :
                (ch >= 'A' && ch <= 'Z') ? 'M' :
                                           '?';

    printf("Resultado: %c\n", resultado);
    
}