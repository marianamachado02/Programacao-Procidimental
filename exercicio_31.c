// exercicio 31

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, menor, maior, i;
	
	printf("Insira um n�mero:\n");
	scanf("%d", &a);
	menor=a;
	maior=a;
	
	do{i++;
		printf("Insira um n�mero:\n");
		scanf("%d", &a);
		
		if(a<menor && a>0){
			menor=a;
		}
		
		if(a>maior && a>0){
			maior=a;
		}	
	}while(a>0);
	
	printf("O maior n�mero desses %d n�meros � %d e o menor � %d.\n", i, maior, menor);
	return 0;
	}
