//13. Implemente um programa de uma máquina de calcular com as 4 operações
//básicas.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int num,i;
	float a, b, c;
	
	do{
		i++;
		if(i!=1){
			system("pause");
			system("cls");
		}
		printf("\n-------------------\n     MENU:        |\n1:Soma;           |\n2:Subtração;      |\n3:Mutiplicação;   |\n4:Divisão;        |\n5:Potências;      |\n6:Raiz quadrada;  |\n");
	printf("7:Seno;           |\n8:Cosseno;        |\n9:Tangente;       |\n0:Sair            |\n-------------------\n\n");
	
	printf("Escolha uma opção:\n");
	scanf("%d", &num);
	
	switch (num){
		case 1:
			printf("Insere um número:\n");
			scanf("%f", &a);
			
			printf("Insere outro número:\n");
			scanf("%f", &b);
			
			c=a+b;
			
			printf("A soma de %.2f com %.2f é de %.2f.\a\n", a,b,c);
			
			break;
			
		case 2:	
		    printf("Insere um número:\n");
			scanf("%f", &a);
			
			printf("Insere outro número:\n");
			scanf("%f", &b);
			
			c=a-b;
			
			printf("A subtração de %.2f com %.2f é de %.2f.\a\n", a,b,c);
			
			break;
		
		case 3:
			printf("Insere um número:\n");
			scanf("%f", &a);
			
			printf("Insere outro número:\n");
			scanf("%f", &b);
			
			c=a*b;
			
			printf("A mutiplicação de %.2f com %.2f é de %.2f.\a\n", a,b,c);
			
			break;
			
		case 4:
			printf("Insere um número:\n");
			scanf("%f", &a);
			
			printf("Insere outro número:\n");
			scanf("%f", &b);
			
			c=a/b;
			
			printf("A divisão de %.2f com %.2f é de %.2f.\a\n", a,b,c);
			
			break;
			
		case 5:
			printf("Insere um número:\n");
			scanf("%f", &a);
			
			printf("Insere outro número:\n");
			scanf("%f", &b);
			
			c=pow(a,b);
			
			printf("O número %.2f elevado a %.2f é de %.2f.\a\n", b,a,c);
			
			break;
		
		case 6:
			printf("Insere um número:\n");
			scanf("%f", &a);
			
			c=sqrt(a);
			
			printf("A raiz quadrada de %.2f é %.2f.\a\n", a,c);
			
			break;
			
		case 7:
			printf("Insere um número:\n");
			scanf("%f", &a);
			
			c=sin(a);
			
			printf("O seno de %.2f é %.2f.\n\n", a,c);
			printf("Nota: O resultado é dado em radianos.\a\n");
			
			break;
			
		case 8:
			printf("Insere um número:\n");
			scanf("%f", &a);
			
			c=cos(a);
			
			printf("O cosseno de %.2f é %.2f.\n\n", a,c);
			printf("Nota: O resultado é dado em radianos.\a\n");
			
			break;
			
		case 9:	
			printf("Insere um número:\n");
			scanf("%f", &a);
			
			c=tan(a);
			
			printf("A tangente de %.2f é %.2f.\n\n", a,c);
			printf("Nota: O resultado é dado em radianos.\a\n");
			
			break;
	}}while(num!=0);
	
	printf("\nFez %d operações.\n", i);
	
	exit(1);
}
