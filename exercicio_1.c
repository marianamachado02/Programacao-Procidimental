// exerc�cio 1

#include <stdlib.h> // standard Library
#include <stdio.h> // Standard Input Output
#include <math.h>

int main() {

int lado, area;

//lado=5;

//area=pow(lado,2); //pow (x,n) � a fun��o pot�ncia x^n est� no package math.h

/* printf() formatted print */
/* \n � para mudar de linha New Line */
/* \t � para tabular */
/* \b � o delte, voltar um car�cter para tr�s */

printf("Qual o valor do lado? \n");
scanf("%d", &lado);

area=lado*lado;

printf("o valor da area do quadrado de lado %d=%d \n", lado, area);

return 0;
}
