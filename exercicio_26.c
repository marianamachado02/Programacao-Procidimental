#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char letra;
	
	printf("Instru��o: Se a letra n�o corresponder � programada, o programa ir� repetir at� o utilizador advinhar a palavra.\n\n");
	
	while(letra!= 'a'){
		printf("Insira uma letra:\n");
		scanf(" %c", &letra);
	}
	
	printf("Parab�ns! Advinhou a letra.\n");
	
	return (1);
}
