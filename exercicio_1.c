// exercício 1

#include <stdlib.h> // standard Library
#include <stdio.h> // Standard Input Output
#include <math.h>

int main() {

int lado, area;

//lado=5;

//area=pow(lado,2); //pow (x,n) é a função potência x^n está no package math.h

/* printf() formatted print */
/* \n é para mudar de linha New Line */
/* \t é para tabular */
/* \b é o delte, voltar um carácter para trás */

printf("Qual o valor do lado? \n");
scanf("%d", &lado);

area=lado*lado;

printf("o valor da area do quadrado de lado %d=%d \n", lado, area);

return 0;
}
