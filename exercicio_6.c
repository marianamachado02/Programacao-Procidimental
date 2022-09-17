//exercício 6

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(void) {

 setlocale(LC_ALL, "Portuguese");
 
 char nome[20];
 
 printf("Qual é o teu nome? \n ");
 scanf("%[^\n]s", &nome);
 
 printf("Olá, bom dia, %s \n", nome);
 
 return 0;
}
