// exercício 7

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	char nome;
	int pf, pi, pr, au;
	
	printf("Qual é o nome do automóvel? \n ");
 scanf("%[^\n]s", &nome);
	
	printf("Qual o preço de fábrica?\n");
	scanf("%d",&pf);
	
	pi= 0.45*pf;
	pr=0.28*pf;
	
	printf("Assim, o preço dos impostos fica %d euros e o valor que vai para o revendedor é %d euros.\n\n", pi, pr);
	
	au= pf+pi+pr;
	
	printf("Logo, o preço do automóvel é %d\n", au);
	
	return 0;
	}
	
