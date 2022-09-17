// exercício 5

#include<stdio.h>
#include<stdlib.h>

int main(void) {

float b, h, a;

printf("Qual o valor da base?\n");
scanf("%f", &b);

printf("Qual o valor da altura?\n");
scanf("%f", &h);

a=(b*h)/2; 

printf("A area do triangulo vale %f \n", a);

return 0;
}

