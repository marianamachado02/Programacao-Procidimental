//46. Implemente um programa que calcule o maior de 3 números reais inseridos
//pelo utilizador. Implemente para o efeito uma função que calcule/retorne o
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
	
	printf("Insira três números:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("O maior número é %d", maior(a,b,c));
	
	return 1;
}
