// exercicio 9

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float nota;
	
	printf("Indique a nota do aluno:\n");
	scanf("%f",&nota);
	
	if(nota >= 9.5){
		printf("O estudante foi aprovado.");
	}
	
	else{
		printf("O estudante não foi aprovado.");
	}
	
	system ("pause");
	exit (0);
}
