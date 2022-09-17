#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, c; // a corresponde ao preço por metro quadrado, b corresponde aos metros quadrados do terreno e c ao preço do terreno.
	
	printf("Qual o preço, em euros, do terreno por metro quadrado?\n");
	scanf("%d", &a);
	
	printf("Quantos metros tem o terreno?\n");
	scanf("%d", &b);
	
	c= a*b;
	
	if(b>=100 && b<=200){
					
			printf("O preço do terreno de %d metros quadrados é de %d.\n", b, c);
			}
	
	else{
		printf("ERRO: O preço deste terreno não é possível de ser calculado");
	}

exit(0);
}
