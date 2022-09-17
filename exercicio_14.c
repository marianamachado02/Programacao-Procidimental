#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float nota;
	
	printf("Insira a nota do aluno:\n");
	scanf("%f", &nota);
	
	if(nota>=0 && nota<5){
		printf("Péssimo.\n");
	}
	
	else if(nota>=5 && nota<8){
		printf("Mau.\n");
	}
	
	else if( nota>=8 && nota<10){
		printf("Insuficiente.\n");
	}
	
	else if( nota>=10 && nota<12){
		printf("Suficiente.\n");
	}
	
	else if( nota>=12 && nota<16){
		printf("Bom.\n");
	}
	
	else if( nota>=16 && nota<18){
		printf("Muito Bom.\n");
	}
	
	else if( nota>=18 && nota<=20){
		printf("Excelente.\n");
	}
	
	return(0);
	}
