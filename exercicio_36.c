//36. Implemente um programa para ler base e altura de 50 tri�ngulos e imprimir a sua �rea.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, base, altura, area;
	
	printf("Insira a base do tri�ngulo.\n");
	scanf("%d", &base);
	
	printf("Insira a altura do tri�ngulo.\n");
	scanf("%d", &altura);
	
	area= (base*altura)/2;
	
	printf("A �rea do tri�ngulo � %d.\n\n", area);
	
	do{
		i++;
		printf("Insira a base do tri�ngulo.\n");
	scanf("%d", &base);
	
	printf("Insira a altura do tri�ngulo.\n");
	scanf("%d", &altura);
	
	area= (base*altura)/2;
	
	printf("A �rea do tri�ngulo � %d.\n\n", area);
	}
	
	while(i!=49);
	
	return(0);
}
