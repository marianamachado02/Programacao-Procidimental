//38. Implemente um programa que leia os valores anuais de Precipita��o de 12
//localidades. Para al�m disso pretende-se que apresente o valor m�ximo, o valor
//m�nimo e a m�dia dos valores lidos.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, n, maior, menor, media, soma;
	
	printf("Insere o valor de precipita��o anual da localidade:\n");
	scanf("%d", &n);
		
	maior=n;
	menor=n;
	
	do{ i++;
		printf("Insere o valor de precipita��o anual da localidade:\n");
		scanf("%d", &n);	
		
		soma= soma+n;	
	} while(i!=11);
	
	if(n<maior){
			maior=n;}
		
	if(n>menor){
		menor=n;}
	
	media=soma/i;
	
	printf("O menor valor � %d, o maior � %d e a m�dia � %d", maior, menor, media);
	
	return (0);	
}
