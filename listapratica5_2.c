#include <stdio.h>
//NOME: LUCAS ANDRE DE OLIVEIRA SIQUEIRA 
//O OBJETIVO DO PRGORAMA É CALCULAR O NUMERO HARMONICO DE N, BASEADO NA ENTRADA DO USUARIO.

int main(){
    
    int n,x;
    printf("escreva os valores dos n primeiros termos do numero harmonico: ");
    scanf("%d",&n);
    float cont=0;
    
    for (x=1;x<=n;x++){
        cont = cont + 1.0/x; // comando que repete a soma dos 1/n numeros 
    }
    printf("%f ",cont);
    
    return 0;
}