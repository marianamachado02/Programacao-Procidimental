#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero[3];
	
	printf("Insira 3 números:\n");
	scanf("%d", &numero[0]);
	scanf("%d", &numero[1]);
	scanf("%d", &numero[2]);
	
	printf("%d\n\n", numero[0]);
	printf("%d\n\n", numero[1]);
	printf("%d\n\n", numero[2]);
	
	return 0;
}
