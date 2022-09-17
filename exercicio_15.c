//  Implemente um programa que indique se um dado número inteiro é PAR ou IMPAR.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, resto;
	
	printf("Insira um número:\n");
	scanf("%d", &num);
	
	resto= num%2;
	
	if(resto==0){
		printf("O número é par.\n");
	}
	
	else{
		printf("O número é ímpar.\n");
	}
	
	return(0);
}
