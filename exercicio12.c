#include <stdio.h>



int main(){

    int x,y;
    
    printf("digite os numeros");
    scanf("%d %d",&x,&y);

    if (x > y){
        printf("o maior numero e: %d",x);
    }else{
        printf("o maior numero e: %d",y);

    }
    return 0;
}