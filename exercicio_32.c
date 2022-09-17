//Ex.32: Dada uma série de 20 valores reais, implemente um programa que calcule e
//escreva a média aritmética destes valores. Entretanto se a média obtida for
//maior que 20 deverá ser atribuído o valor 20 para a média.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	float a, media, soma=0;
	
	for(i=1; i<=5; i++){
		printf("Insere o número:\n");
		scanf("%f", &a);
		
		soma= soma+a;
		
		media=soma/i;}
		
	if(media>=20){
			printf("A média é 20.\n");}
			
	else{ printf("A média é %.2f.\n", media);
	}	
	
	return 0;
}
