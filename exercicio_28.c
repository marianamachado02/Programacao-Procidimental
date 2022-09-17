//28. Implemente um programa que permita aceitar um valor numérico que apenas 
//pode ser positivo. Se não for positivo deve insistir na leitura.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a;
	
	do{
	printf("Insira um número:\n");
	scanf("%d", &a);
	}while(a<0);
	
	return 0;
}
