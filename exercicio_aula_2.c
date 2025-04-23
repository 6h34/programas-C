/******************************************************************************

//NOME - LUCAS ANDRE DE OLIVEIRA SIQUEIRA - MATRICULA - 202210035111
//EXERCICIO DADO EM AULA - ENTREGA 14/04 - EXERCÍCIO 2
//OBJETIVO - Receber um numero e decompor o mesmo em fatores primos

*******************************************************************************/
#include <stdio.h>
void primo(int n){ // entrada do programa
    int i = 2; // menor fator primo que podemos dividir 
    while (n > 1){
        if ( n % i == 0 ){  // descobrimos se n é divisivel por i
            printf("%d ",i); // caso seja, ele é imprimido 
            n=n/i; // e reduzido pelo menor divisor comum no momento
        }else{ 
            i++; /// caso nao seja, ele é incrementado, até achar algum numero que seja divisivel por n
        }
    }
}

int main(){
    int num;
    printf("escreva o numero: ");
    scanf("%d",&num);
    printf("os fatores primos desse numero sao: " );
    primo(num);
    


}