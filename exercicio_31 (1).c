// Ex. 31: Implemente um programa que permita encontrar o maior e menor número de
//uma série de números positivos fornecidos. A sequência termina com o
//número ‘0’.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, n, maior, menor;
	
	printf("Insere um número:");
	scanf("%d", &n);
	
	maior=n;
	menor=n;
	
	do{
		i++;
		if(n!=0){
			system("pause");
			system("cls");
		}
		printf("Insere um número:");
		scanf("%d", &n);
		
		if(n> maior){
			maior=n;
		}
		
		if(n< menor && n>0){
			menor=n;
		}
	}
	while(n!=0);
	
	printf("O número maior é %d e o menor é %d.\n", maior, menor);
	printf("Inseriste %d números.", i);
	return 0;
}
