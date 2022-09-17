// exercício 11

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
		setlocale(LC_ALL, "Portguese");
		int horas, min;

		printf("Qual a hora a ser convertida para AM/PM [##h##m]?\n");
		scanf("%dh%dm", &horas,&min);
		
		if(horas>=13){ 
		horas=horas-12;
		printf("Hora atual, %d:%d PM\n", &horas, min);}
		
		else{ printf("Hora atual, %d:%d AM\n", &horas, min);}
		
		return 0;
}

