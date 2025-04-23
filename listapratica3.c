#include <stdio.h>

//nome: Lucas Andre de Oliveira Siqueira 
//Lista pratica 2 - exercicio 3
//Funcao : ler as coordenadas de um ponto (x,y) e determinar qual quadrante ele faz parte, 
//         caso o ponto esteja sobre um dos eixos, informar qual eixo ele se encontra.

int main()
{
    
    //variaveis atribuidas
    
    int x,y;
    
    //entrada do usuario
    
    printf("escreva os valores de x e y respectivamente: ");    
    scanf("%d %d",&x,&y);
    
    //saida do programa

    if ((x > 0 || x < 0)  && y == 0){
        printf("o ponto pertence apenas ao eixo X"); //  (x > 0 || x < 0) = ( x != 0 )
    }else if (x ==0 && (y > 0 || y < 0)){ //             (y > 0 || y < 0) = ( y != 0 )
        printf("o ponto pertence apenas ao eixo y");
    }else if (x > 0 && y > 0){
        printf("esse ponto pertence ao primeiro quadrante");
        
    }else if ( x < 0 && y > 0){
        printf("esse ponto pertece ao segundo quadrante");
    }else if(x < 0 && y < 0){
        printf("esse ponto pertece ao terceiro quadrante");
    }else if ( x > 0 && y < 0){
        printf("esse ponto pertece ao quarto quadrante");
    }
    
        return 0;
    }
        
    
