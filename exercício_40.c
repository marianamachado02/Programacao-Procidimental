//Implemente um programa que mostre dados estatísticos tendo como base um 
//universo de 100 entrevistas realizadas com o objetivo de saber quantas pessoas 
//começaram a trabalhar:
//? com menos de 18 anos;
//? com mais de 18 anos;
//? com menos de 18 anos do sexo masculino;
//? com mais de 18 anos do sexo masculino;
//? com menos de 18 anos do sexo feminino;
//? com mais de 18 anos do sexo feminino.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade, genero, i=0, j=0, a=0, b=0, c=0, d=0, e=0;
	
	do{i++;
	
	if(i!=1){
			system("pause");
			system("cls");
		}
	
	printf("Com que idade o entrevistado número %d começou a trabalhar?\n", i);
	scanf("%d", &idade);
	
	printf("Qual o seu género?\n1- feminino\n2-masculino\n");
	scanf("%d", &genero);
	
	if(idade<18){j++;}
	
	if(idade>=18){a++;}
	
	if(idade<18 && genero==1){b++;}
	
	if(idade>=18 && genero==1){c++;}
	
	if(idade<18 && genero==2){d++;}
	
	if(idade>=18 && genero==2){e++;}
	} while(i<100);
	
	printf("Começaram a trabalhar %d pessoas com menos de 18 anos.\nSendo %d delas do sexo masculino e %d do sexo feminino.\nAs restantes %d começaram a trabalhar com 18 ou mais.\nSendo %d do sexo masculino e %d do sexo feminino.\n", j,d,b,a,e,c);
	
	return 0;
}
