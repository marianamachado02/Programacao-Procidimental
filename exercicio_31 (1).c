// Ex. 31: Implemente um programa que permita encontrar o maior e menor n�mero de
//uma s�rie de n�meros positivos fornecidos. A sequ�ncia termina com o
//n�mero �0�.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, n, maior, menor;
	
	printf("Insere um n�mero:");
	scanf("%d", &n);
	
	maior=n;
	menor=n;
	
	do{
		i++;
		if(n!=0){
			system("pause");
			system("cls");
		}
		printf("Insere um n�mero:");
		scanf("%d", &n);
		
		if(n> maior){
			maior=n;
		}
		
		if(n< menor && n>0){
			menor=n;
		}
	}
	while(n!=0);
	
	printf("O n�mero maior � %d e o menor � %d.\n", maior, menor);
	printf("Inseriste %d n�meros.", i);
	return 0;
}
