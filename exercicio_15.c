//  Implemente um programa que indique se um dado n�mero inteiro � PAR ou IMPAR.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, resto;
	
	printf("Insira um n�mero:\n");
	scanf("%d", &num);
	
	resto= num%2;
	
	if(resto==0){
		printf("O n�mero � par.\n");
	}
	
	else{
		printf("O n�mero � �mpar.\n");
	}
	
	return(0);
}
