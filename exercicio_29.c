#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int k;
	float num;
	float maior;
	
	printf("Insira um n�mero:\n");
	scanf("%f", &num);
	
	maior=num;
	
	//o ciclo come�a em 2 porque j� recebi um n�mero;
	for (k=2; k<=50; k++){
		printf("Insira um n�mero:\n");
		scanf("%f", &num);
		
		if(num>maior){
			maior=num;
		}
	}
	
	printf("O maior de todos os valores inseridos � %.1f\n", maior);
	
	return 0;
}

//Sugest�o: fazer o mesmo programa, mas ele s� termina quando mudar o maior pela d�cima vez;
