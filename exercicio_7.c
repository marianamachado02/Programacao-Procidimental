// exerc�cio 7

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	char nome;
	int pf, pi, pr, au;
	
	printf("Qual � o nome do autom�vel? \n ");
 scanf("%[^\n]s", &nome);
	
	printf("Qual o pre�o de f�brica?\n");
	scanf("%d",&pf);
	
	pi= 0.45*pf;
	pr=0.28*pf;
	
	printf("Assim, o pre�o dos impostos fica %d euros e o valor que vai para o revendedor � %d euros.\n\n", pi, pr);
	
	au= pf+pi+pr;
	
	printf("Logo, o pre�o do autom�vel � %d\n", au);
	
	return 0;
	}
	
