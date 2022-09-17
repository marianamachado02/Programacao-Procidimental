// exercício 10

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// int main(void) {
//	setlocale(LC_ALL, "Portuguese");
/*	float f1, f2, media;
	
	printf("Qual a nota da primeira frequência?\n");
	scanf("%f", &f1);
	
	printf("Qual a nota da segunda frequência?\n");
	scanf("%f", &f2);
	
	media=f1*0,5+f2*0,5;
	
	if(media>=9.5){
		printf("O aluno foi aprovado. :)\n");
	}
	else{
		printf("O aluno está reprovado. :(((\n");
	}
	
	system ("pause");
	exit (0);
	}*/
	
	int main(void){
		setlocale(LC_ALL, "Portuguese");
		float f1,f2, media;
		
		printf("Qual a nota da primeira frequência?\n");
		scanf("%f", &f1);
		
		printf("Qual a nota da segunda frequência?\n");
		scanf("%f", &f2);
		
		media=f1*0.4+f2*0.6;
		
		if(f1>=8.5 && f2>=8.5 && media>=9.5){
			printf("O aluno foi aprovado. :)\n");
		}
		else{
			printf("O aluno está reprovado. :(");
		}
		
		system ("pause");
		exit(0);
	}
