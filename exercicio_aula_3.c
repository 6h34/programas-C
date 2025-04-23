#include <stdio.h>
//NOME : Lucas Andre de Oliveira Siqueira 
//objetivo - retornar os numeros perfeitos no intervalo de 1 a 1000.
void perfeito(int n){ 
    int cont=0;

    for (int x=1; x < n;x++ ){ // percorrer todos os valores de 1 até n
        if (n % x == 0){ // saber se o numero é divisivel por n
            cont= cont + x; // somar no contador caso seja
        }
    }
    if (cont == n && n > 0 ){ // caso a soma dos divisores for igual ao valor de n(o que configura um numero perfeito), imprimir o numero
        printf("%d ",n);
    }
}  

int main(){
    int x= 1000;
    printf("os numeros perfeitos de 1 a 1000 sao: ");
    for ( int a = 1; a <= x ; a++){ // imprimir os numeros perfeitos no intervalo de 1 a 1000
        perfeito(a);
    }
    
    

}