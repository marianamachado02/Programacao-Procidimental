#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=0, vetor[3];
	
	do{i++;
	
	printf("Insira um número:\n");
	scanf("%d", &vetor[i]);

	}while(i<3);
	
	printf("Vetor[1]=%d\nVetor[2]=%d\nVetor[3]=%d", vetor[1], vetor[2], vetor[3]);
	
	return 0;
}
