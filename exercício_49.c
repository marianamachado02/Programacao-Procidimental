//49. Implemente um programa de uma m�quina de calcular. Esta dever� ter as
//seguintes funcionalidades:
//a. Um menu para escolher a pr�xima opera��o,
//b. As opera��es b�sicas: soma, subtra��o, multiplica��o e divis�o,
//c. C�lculo do fatorial de um n�mero,
//d. Verificar se um determinado n�mero � primo,
//e. C�lculo da pot�ncia de um n�mero,
//f. Calcular o seno ou o cosseno,
//g. Calcular o n.� de d�gitos de um n�mero,
//h. Raiz quadrada
//i. Ra�zes de polin�mios de segundo grau

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
	printf("2: Subtra��o;\n");
	printf("3: Mutiplica��o;\n");
	printf("4: Divis�o;\n");
	printf("5: Fatorial;\n");
	printf("6: N�meros Primos;\n");
	printf("7: Pot�ncias;\n");
	printf("8: Seno;\n");
	printf("9: Cosseno;\n");
	printf("10: Tangente;\n");
	printf("11: N� de d�gitos;\n");
	printf("12: Raiz Quadrada;\n");
	printf("0: Sair;\n");
	
	printf("\nEscolha uma funcionalidade:\n");
	scanf("%d", &num);
	
	switch(num){
		case 1: printf("Insira dois n�meros:\n");
				scanf("%f %f", &a, &b);
				
				printf("A soma � %.2f.\n", soma(a,b));
				
				break;
				
		case 2: printf("Insira dois n�meros:\n");
				scanf("%f %f", &a, &b);
				
				printf("A subtra��o � %.2f.\n", subtracao(a,b));
				
				break;
				
		case 3: printf("Insira dois n�meros:\n");
				scanf("%f %f", &a, &b);
				
				printf("A mutiplica��o � %.2f.\n", mutiplicacao(a,b));
				
				break;
				
		case 4: printf("Insira dois n�meros:\n");
				scanf("%f %f", &a, &b);
				
				printf("A divis�o � %.2f.\n", divisao(a,b));
				
				break;
				
		case 5: printf("Insira um n�mero:\n");
				scanf("%d", &c);
				
				printf("O seu fatorial � %d.\n", fatorial(c));
				
				break;
				
		case 6: printf("Insira um n�mero:\n");
				scanf("%d", &c);
					if (primo(c) == 0)
    				printf("%d � um n�mero primo.\n", c);
 					else
    				printf("%d n�o � um n�mero primo.\n", c);
    				
    				break;
    				
    	case 7: printf("Insira dois n�meros:\n");
    			scanf("%d %d", &c, &d);
    			
    			printf("%d elevado a %d � %d.\n", c, d, potencia(c,d));
    			
    			break;
    			
    	case 8: printf("Insira um n�mero:\n");
    			scanf("%d", &c);
    	
    			printf("O seu seno � %d.\n\n", seno(c));
    			printf("Nota: O resultado � dado em radianos.\n");
    			
    			break;
    			
    	case 9: printf("Insira um n�mero:\n");
    			scanf("%d", &c);
    	
    			printf("O seu cosseno � %d.\n\n", cosseno(c));
    			printf("Nota: O resultado � dado em radianos.\n");
    			
    			break;
    			
    	case 10:printf("Insira um n�mero:\n");
    			scanf("%d", &c);
    	
    			printf("A sua tangente � %d.\n\n", tangente(c));
    			printf("Nota: O resultado � dado em radianos.\n");
    			
    			break;
    			
    	case 11:printf("Insira um n�mero:\n");
    			scanf("%d", &c);
    			
    			printf("O n�mero tem %d d�gitos.\n", digitos(c));
    			
    			break;
    			
    	case 12: printf("Insira um n�mero:\n");
    			 scanf("%d", &c);
    			 
    			 printf("A raiz quadrada desse n�mero �: %d.\n", raiz_q(c));
    			 
    			 break;	}
	
	}while(num!=0);
	
	printf("Fez %d opera��es.", i);
	
	return 1;}
	
	
