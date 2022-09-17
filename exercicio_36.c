//36. Implemente um programa para ler base e altura de 50 triângulos e imprimir a sua área.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, base, altura, area;
	
	printf("Insira a base do triângulo.\n");
	scanf("%d", &base);
	
	printf("Insira a altura do triângulo.\n");
	scanf("%d", &altura);
	
	area= (base*altura)/2;
	
	printf("A área do triângulo é %d.\n\n", area);
	
	do{
		i++;
		printf("Insira a base do triângulo.\n");
	scanf("%d", &base);
	
	printf("Insira a altura do triângulo.\n");
	scanf("%d", &altura);
	
	area= (base*altura)/2;
	
	printf("A área do triângulo é %d.\n\n", area);
	}
	
	while(i!=49);
	
	return(0);
}
