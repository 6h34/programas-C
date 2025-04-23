#include <stdio.h>
//NOME:LUCAS ANDRE DE OLIVEIRA SIQUEIRA
//OBJETIVO DO PROGRAMA:ESCREVER UMA FUNÇAO QUE RETORNE O INVERSO DE UM NUMERO
int inverso(int n){
    int ni,no;
    no = n;
    ni = 0;
    
    while (n != 0){
        int d = n % 10;
        ni = ni * 10 + d;
        n = n /  10;
    }
    if (ni == no){
        printf("o numero é um palindromo!\n");
        return ni;
    }else{
        return ni;
    }
    

}




int main(){
    int n,ni;
    printf("escreva o numero: ");
    scanf("%d",&n);
    ni = inverso(n);
    printf("o numero invertido de %d e %d\n",n,ni);

}