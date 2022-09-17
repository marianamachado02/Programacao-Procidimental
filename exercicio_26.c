#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char letra;
	
	printf("Instrução: Se a letra não corresponder á programada, o programa irá repetir até o utilizador advinhar a palavra.\n\n");
	
	while(letra!= 'a'){
		printf("Insira uma letra:\n");
		scanf(" %c", &letra);
	}
	
	printf("Parabéns! Advinhou a letra.\n");
	
	return (1);
}
