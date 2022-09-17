// exercício 4

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


float main(void) {

float r, h, p, v;

p=3.141592654;

printf("Qual o valor da altura?\n");
scanf("%f", &h);

printf("Qual o valor do raio?\n");
scanf("%f", &r);

v=p*r*r*h; 

printf("O volume do cilindro vale %.4f \n", v);

return 0;
}
