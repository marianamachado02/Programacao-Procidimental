//Ex.32: Dada uma s�rie de 20 valores reais, implemente um programa que calcule e
//escreva a m�dia aritm�tica destes valores. Entretanto se a m�dia obtida for
//maior que 20 dever� ser atribu�do o valor 20 para a m�dia.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	float a, media, soma=0;
	
	for(i=1; i<=5; i++){
		printf("Insere o n�mero:\n");
		scanf("%f", &a);
		
		soma= soma+a;
		
		media=soma/i;}
		
	if(media>=20){
			printf("A m�dia � 20.\n");}
			
	else{ printf("A m�dia � %.2f.\n", media);
	}	
	
	return 0;
}
