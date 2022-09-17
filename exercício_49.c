//49. Implemente um programa de uma máquina de calcular. Esta deverá ter as
//seguintes funcionalidades:
//a. Um menu para escolher a próxima operação,
//b. As operações básicas: soma, subtração, multiplicação e divisão,
//c. Cálculo do fatorial de um número,
//d. Verificar se um determinado número é primo,
//e. Cálculo da potência de um número,
//f. Calcular o seno ou o cosseno,
//g. Calcular o n.º de dígitos de um número,
//h. Raiz quadrada
//i. Raízes de polinómios de segundo grau

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

float soma(float x, float y){
	return x+y;}
	
float subtracao(float x, float y){
	return x-y;}	
	
float mutiplicacao(float x, float y){
	return x*y;}
	
float divisao(float x, float y){
	return x/y;}
	
int fatorial(int x){
	int fat;
	for(fat = 1; x > 1; x = x - 1){
        
		fat = fat * x;}
		
	if(x=0){
		fat=1;}
		
	return fat;
}
		
int primo(int x){
	int i, resultado=0;
	for (i = 2; i<= x/2; i++) {
    	if (x % i == 0) 
       		resultado++;
       		break;}
       		
return resultado;
}
	
int potencia(int x, int y){
	return pow( x, y);}
	
int seno(int x){
	return sin(x);}
	
int cosseno(int x){
	return cos(x);}

int tangente(int x){
	return tan(x);
}

int digitos(int x){
	int i=0;
	if (x == 0) {i = 1;}
	
    else { while (x!= 0) {i = i + 1; x = x / 10;}}
	
	return i;}
               
int raiz_q(int x){
	return sqrt(x);
}       

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num=0, i=0, c=0, d=0;
	float a=0, b=0;
	
	do{i++;
	
	if (i!=1){
			system("pause");
			system("cls");}
		
	printf("Menu:\n");
	printf("1: Soma;\n");
	printf("2: Subtração;\n");
	printf("3: Mutiplicação;\n");
	printf("4: Divisão;\n");
	printf("5: Fatorial;\n");
	printf("6: Números Primos;\n");
	printf("7: Potências;\n");
	printf("8: Seno;\n");
	printf("9: Cosseno;\n");
	printf("10: Tangente;\n");
	printf("11: Nº de dígitos;\n");
	printf("12: Raiz Quadrada;\n");
	printf("0: Sair;\n");
	
	printf("\nEscolha uma funcionalidade:\n");
	scanf("%d", &num);
	
	switch(num){
		case 1: printf("Insira dois números:\n");
				scanf("%f %f", &a, &b);
				
				printf("A soma é %.2f.\n", soma(a,b));
				
				break;
				
		case 2: printf("Insira dois números:\n");
				scanf("%f %f", &a, &b);
				
				printf("A subtração é %.2f.\n", subtracao(a,b));
				
				break;
				
		case 3: printf("Insira dois números:\n");
				scanf("%f %f", &a, &b);
				
				printf("A mutiplicação é %.2f.\n", mutiplicacao(a,b));
				
				break;
				
		case 4: printf("Insira dois números:\n");
				scanf("%f %f", &a, &b);
				
				printf("A divisão é %.2f.\n", divisao(a,b));
				
				break;
				
		case 5: printf("Insira um número:\n");
				scanf("%d", &c);
				
				printf("O seu fatorial é %d.\n", fatorial(c));
				
				break;
				
		case 6: printf("Insira um número:\n");
				scanf("%d", &c);
					if (primo(c) == 0)
    				printf("%d é um número primo.\n", c);
 					else
    				printf("%d não é um número primo.\n", c);
    				
    				break;
    				
    	case 7: printf("Insira dois números:\n");
    			scanf("%d %d", &c, &d);
    			
    			printf("%d elevado a %d é %d.\n", c, d, potencia(c,d));
    			
    			break;
    			
    	case 8: printf("Insira um número:\n");
    			scanf("%d", &c);
    	
    			printf("O seu seno é %d.\n\n", seno(c));
    			printf("Nota: O resultado é dado em radianos.\n");
    			
    			break;
    			
    	case 9: printf("Insira um número:\n");
    			scanf("%d", &c);
    	
    			printf("O seu cosseno é %d.\n\n", cosseno(c));
    			printf("Nota: O resultado é dado em radianos.\n");
    			
    			break;
    			
    	case 10:printf("Insira um número:\n");
    			scanf("%d", &c);
    	
    			printf("A sua tangente é %d.\n\n", tangente(c));
    			printf("Nota: O resultado é dado em radianos.\n");
    			
    			break;
    			
    	case 11:printf("Insira um número:\n");
    			scanf("%d", &c);
    			
    			printf("O número tem %d dígitos.\n", digitos(c));
    			
    			break;
    			
    	case 12: printf("Insira um número:\n");
    			 scanf("%d", &c);
    			 
    			 printf("A raiz quadrada desse número é: %d.\n", raiz_q(c));
    			 
    			 break;	}
	
	}while(num!=0);
	
	printf("Fez %d operações.", i);
	
	return 1;}
	
	
