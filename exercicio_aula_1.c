/******************************************************************************

//NOME - LUCAS ANDRE DE OLIVEIRA SIQUEIRA 
//EXERCICIO DADO EM AULA - ENTREGA 14/04 - EXERCÍCIO 1
//OBJETIVO - SABER SE O NUMERO SATISFAZ A CONDIÇAO DADA 

*******************************************************************************/
#include <stdio.h>

void algarismo(int num){ // ENTRADA: Um numero com 4 algarismos
    int n1,n2,n3;
    
    n1 = num / 100; // separa os 2 primeiros algarismos do numero
    n2 = num % 100; // separa os 2 ultimos algarismos do numero
    n3 = n1 + n2; // soma os resultados 
    if (n3 * n3 == num){ // saber se o numero satisfaz a condiçao pedida no exercicio
        printf("propriedade comprovada!\n"); 
    }else{
        printf("o numero nao satisfaz a propriedade!\n");
    }
}

int main()
{
    int n;
    printf("escreva o numero: \n");
    scanf("%d",&n); 
    algarismo(n);
    
    
    return 0;
}
