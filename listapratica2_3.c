#include <stdio.h>
    //NOME:LUCAS ANDRE DE OLIVEIRA SIQUEIRA 
    //LISTA PRATICA 3 - ATIVIDADE 3 
    //OBJETIVO DO EXERCICIO - fazer um switch case com os codigos da ATIVIDADE 2

int main(){
    char opcao;
    
    printf("digite uma operacao:\n");
    printf("(a) receber um inteiro e retornar -1 se ele for par e 1 se ele for impar; \n(b) receber um racional e retornar 1 se ele for positivo e 0 caso contrario;\n(c) receber tres racionais e retornar o maior deles;\n(d) receber tres racionais e retornar a media aritmetica dos dois maiores;\n(e) receber um caractere e retornar:\nm se ele for uma letra minuscula do alfabeto;\nM se ele for uma letra maiuscula do alfabeto;\n? se for um outro caractere qualquer.");
    scanf("%c",&opcao);
    switch(opcao){
        case 'a':{
        int x;
        int par;

        printf("ATIVIDADE 1 \ndigite um valor: \n");
        scanf("%d",&x);
        par = ( x % 2 == 0 ) ?  -1 : 1 ;

        printf( "%d\n",par);
        break;
        } 
        case 'b':{

        float a,racional;

        printf(" digite um valor racional:\n");
        scanf("%f",&a);
        printf("\n");
        racional=(a > 0) ? 1 : 0;
        printf("%.0f",racional);
        break;
        }
        case 'c':{
            int n1,n2,n3,absoluto;

            printf("escreva os 3 numeros:\n");
            scanf("%d",&n1);
            scanf("%d",&n2);
            scanf("%d",&n3);
            absoluto=(n1 < n2 ) ? (n2 < n3) ? n2 : n3 : n1;
            printf("\n");
            printf("o maior valor e %d\n",absoluto);
            break;
        }
        case 'd':{
            float r1,r2,r3,men;
            printf("escreva 3 numeros:\n");
            scanf("%f",&r1);
            scanf("%f",&r2);
            scanf("%f",&r3);
            men=(r1 <= r2 && r1 <= r3) ? (r2+r3)/2 : (r2 <= r1 && r2 <= r3) ? (r1 + r3) / 2: (r1 + r2) /2 ;
            printf("a media é: %0.1f\n",men);
            break;
        }
        case 'e':{
            char ch, resultado;

            printf("Digite um caractere: \n");
            scanf(" %c", &ch); // 

            resultado = (ch >= 'a' && ch <= 'z') ? 'm' :
                (ch >= 'A' && ch <= 'Z') ? 'M' :
                                           '?';

            printf("Resultado: %c\n", resultado);
            break;

        }



        default:
        printf("opcao invalida!");
        break;
            
    }
    return 0;

}