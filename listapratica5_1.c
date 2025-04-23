
//NOME: LUCAS ANDRE DE OLIVERA SIQUEIRA 
//LISTA PRATICA 5 - ATIVIDADE 1
//O objetivo do programa ter como objetivo calcular a potencia de um n, usando o comando for,



#include <stdio.h>


int main()
{
    int x,y;
    printf("escreva o valor de x e y: ");
    scanf("%d %d",&x,&y);
    
    if (x != 0 && y >= 0){
        int cont=x;
        for(int i=1;i<y;i++){
            cont*=x;
        }
        printf("%d ^ %d = %d",x,y,cont);
    }else{
        printf("erro! os numeros nao satisfazem a condicao aplicada!");
    }

    return 0;
}