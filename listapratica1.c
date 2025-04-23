#include<stdio.h>

//nome: Lucas Andre de Oliveira Siqueira 
//Lista pratica 2 - exercicio 1
//Funcao : receber 3 notas e retornar a media das 2 maiores notas


int main(){
    //variaveis usadas 
    float n1,n2,n3;
    float media;
    //entrada do usuario
    printf("digite as notas das provas :");

    scanf("%f %f %f",&n1,&n2,&n3);

    //verificar as 2 maiores notas 
    if (n1 < n2 && n1 <n3 ){
        media=(n2+n3)/2;
    }else if(n2 < n3 && n2 < n1){
        media=(n1+n3)/2;
    }else if(n3 < n1 && n3 < n2){
        media=(n1+n2)/2;
    }
    
    //saida do usuario
    printf("media das 2 maiores notas: %0.2f ",media);

}