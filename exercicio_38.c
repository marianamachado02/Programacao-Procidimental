//38. Implemente um programa que leia os valores anuais de Precipitação de 12
//localidades. Para além disso pretende-se que apresente o valor máximo, o valor
//mínimo e a média dos valores lidos.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, n, maior, menor, media, soma;
	
	printf("Insere o valor de precipitação anual da localidade:\n");
	scanf("%d", &n);
		
	maior=n;
	menor=n;
	
	do{ i++;
		printf("Insere o valor de precipitação anual da localidade:\n");
		scanf("%d", &n);	
		
		soma= soma+n;	
	} while(i!=11);
	
	if(n<maior){
			maior=n;}
		
	if(n>menor){
		menor=n;}
	
	media=soma/i;
	
	printf("O menor valor é %d, o maior é %d e a média é %d", maior, menor, media);
	
	return (0);	
}
