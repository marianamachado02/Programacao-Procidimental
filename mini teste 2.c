#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, c; // a corresponde ao pre�o por metro quadrado, b corresponde aos metros quadrados do terreno e c ao pre�o do terreno.
	
	printf("Qual o pre�o, em euros, do terreno por metro quadrado?\n");
	scanf("%d", &a);
	
	printf("Quantos metros tem o terreno?\n");
	scanf("%d", &b);
	
	c= a*b;
	
	if(b>=100 && b<=200){
					
			printf("O pre�o do terreno de %d metros quadrados � de %d.\n", b, c);
			}
	
	else{
		printf("ERRO: O pre�o deste terreno n�o � poss�vel de ser calculado");
	}

exit(0);
}
