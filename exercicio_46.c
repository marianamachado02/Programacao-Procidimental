//46. Implemente um programa que calcule o maior de 3 n�meros reais inseridos
//pelo utilizador. Implemente para o efeito uma fun��o que calcule/retorne o
//maior de dois valores reais.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int maior(int x, int y, int z){
	int maior;
	if(x>=y && x>=z){
		maior=x;}
	
	else if (z>=x){
		maior=z;}    
	
	else {
		maior=y;}
		
	return maior;}


int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	
	printf("Insira tr�s n�meros:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("O maior n�mero � %d", maior(a,b,c));
	
	return 1;
}
