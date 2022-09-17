//37. Implemente um programa que leia as notas de uma turma de 60 alunos numa
//disciplina e calcule e apresente a média das notas. O professor pode apenas
//inserir as notas dos alunos que entender, não sendo imperativo que haja a
//inserção das 60 notas visto que certos alunos podem faltar ao Exame.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, j=0;
	float soma=0, b, media;
	
	for(i=0; i<6; i++){
		printf("Insira a nota do aluno:\n");
		scanf("%f", &b);
		
		if(b!=0){j++;}
		soma=soma+b;
		}
		
		media=soma/j;
		
	printf("A média é %.2f.", media);
		
	exit(0);	
	}
