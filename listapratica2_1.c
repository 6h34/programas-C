#include <stdio.h>
//NOME:LUCAS ANDRE DE OLIVEIRA SIQUEIRA 
//LISTA PRATICA 3 - ATIVIDADE 1 
//OBJETIVO DO EXERCICIO - Corrigir o codigo proposto pelo professor


int main() {
char simbolo;

printf("Digite um caractere.\n");
scanf ("%c", &simbolo);
switch(simbolo) {
case '!':
printf("Exclamacao.\n");
break;
case '?':
printf("Interrogacao.\n");
break;
case '@':
printf("O proximo simbolo eh %c.\n", simbolo + 1 );
break;
default:
printf("Simbolo qualquer.\n");
}
return 0;
}