//28. Implemente um programa que permita aceitar um valor num�rico que apenas 
//pode ser positivo. Se n�o for positivo deve insistir na leitura.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a;
	
	do{
	printf("Insira um n�mero:\n");
	scanf("%d", &a);
	}while(a<0);
	
	return 0;
}
