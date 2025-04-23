#include <stdio.h>
//NOME: LUCAS ANDRE DE OLIVERA SIQUEIRA 
//LISTA PRATICA 5 - ATIVIDADE 4
//O objetivo do programa ter como entrada do usuario um numero n, de valores ,que serao lidos pelo usuario,
//tirar a media dos numeros positivos e negativos, caso seja registrado um n negativo, o programa deve continuar e ler o proximo numero sem contar o numero negativo.




int main(){
    int n,x;
    float mp, mi;
    int c = 0;
    int sp=0;
    int si=0;
    int cp=0;
    int ci=0;
    printf("escreva os n elementos para adicionar: ");
    scanf("%d",&n);
    for (x=1;x<n+1;x++){ //os n numeros que serao lidos pelo teclado
        printf("escreva o %d numero: ",x); 
        int n1; 
        scanf("%d",&n1);
        if (n1 < 0){ // se for um n negativo o programa executará essa operacao para pular para o proximo programa.

            printf("erro ! numero negativo!\n");
            c+=1;
            if (c == 3){
                printf("erro, 3 numeros negativos!\n");
                break;
            }
            continue;
            
                        
        }else{
            if (n1 % 2 == 0 ){ //se n for positivo, somará para fazer a media dos n positivos
                sp = sp + n1;
                cp = cp + 1;
            }else if(n1 % 2 != 0) {// se n for negativo, somará para fazer a media dos n negativos
                si = si + n1;
                ci = ci + 1;
            }
        }
    }

    if (cp > 0 || ci > 0){ // caso seja feito alguma contagem, as medias sairão aqui
        mp = sp / cp;
        mi = si / ci;
        printf("a media dos valores pares e %0.2f , a media dos valores impares e %0.2f",mp,mi);
    }else{
        printf("nao tem media para calcular");
    }
}