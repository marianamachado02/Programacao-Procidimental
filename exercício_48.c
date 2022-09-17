//48. Implemente um algoritmo que apresente no ecrã todos os elementos do vetor.

//tá com um erro!!!!!!

#include<stdio.h>
#include<stdlib.h>

int main(){
	int vetor[10]={1,2,3,4,5,6,7.7,4,1,90};
	int i=0;
	
	do{i++;
		printf("vetor[%d]=%d\n", i, vetor[i]);
	}while(i<10);
	
	return 0;
}
