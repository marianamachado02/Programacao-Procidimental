//47. Implemente um programa que permita inserir uma sequ�ncia de 100
//elementos do tipo inteiro com valores entre 0 e 20. Utilize uma fun��o que
//permita ao utilizador inserir um valor inteiro apenas pode ter valor entre 0 e
//20. Se tal n�o acontecer deve insistir na leitura.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a=0, i=0;
	
	do{
	for(a=0; a>=0 && a<=20;){
		i++;
		printf("%d- Insira um n�mero:\n", i);
		scanf("%d", &a);
	}
	}while(i<5);
	
	return 1;
	
}
