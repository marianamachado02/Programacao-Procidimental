#include <stdio.h>
#include<locale.h>
#define MAX_NOME 50
#define MAX_NOME_S "49"


  void main(void) {
  	setlocale(LC_ALL, "Portuguese");
    char name[MAX_NOME] = ""; // definir nome como uma string vazia;
	int i = 0;
	
	for (i = 1; i <= 20; i++) {// ciclo de 20 repetições
	/* Inserção de um nome completo */
	printf("Insira o %dº nome : ", i);
	//Só aceita caractéres de a-z e A-Z e espaços;
	//só lê um máximo de MAX_NAME_S caracteres;
	//se forem inseridos mais do que 20 caracteres eles ficam no "buffer"
	scanf(" %" MAX_NOME_S "[a-zA-Z ]s", name);
	// Mesma coisa se escrever: scanf(" %49[a-zA-Z ]s", name);
	/* Visualização do nome inserido */
	printf("Foi inserido o nome ‘%s’\n", name);
	}
	
	system("pause");}

