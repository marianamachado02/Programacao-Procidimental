#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int k;
	float num;
	float maior;
	
	printf("Insira um número:\n");
	scanf("%f", &num);
	
	maior=num;
	
	//o ciclo começa em 2 porque já recebi um número;
	for (k=2; k<=50; k++){
		printf("Insira um número:\n");
		scanf("%f", &num);
		
		if(num>maior){
			maior=num;
		}
	}
	
	printf("O maior de todos os valores inseridos é %.1f\n", maior);
	
	return 0;
}

//Sugestão: fazer o mesmo programa, mas ele só termina quando mudar o maior pela décima vez;
