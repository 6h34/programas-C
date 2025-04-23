#include <stdio.h>
//NOME:LUCAS ANDRE DE OLIVEIRA SIQUEIRA 
    //LISTA PRATICA 3 - ATIVIDADE 5 
    //OBJETIVO DO EXERCICIO - substituir o comando de seleçao if else por switch case


int main() {
    float a, b;
    char operador;

    printf("Digite uma operacao aritmetica entre dois numeros a e b, no formato \"a <+ - * /> b\":\n");
    scanf("%f %c %f", &a, &operador, &b);

    switch (operador) {
        case '+':
            printf("%.2f\n", a + b);
            break;
        case '-':
            printf("%.2f\n", a - b);
            break;
        case '*':
            printf("%.2f\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("%.2f\n", a / b);
            else
                printf("Erro: divisao por zero.\n");
            break;
        default:
            printf("Operador nao definido.");
    }

    return 0;
}