/* Nome: Mariana Bessa Machado
Data: 28-10-2021
Titulo: Mini-teste 1
Disciplina: Programação procidimental */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	char nome[20];
	float nt, nd, sb, sl, inss, irs; // numero de horas trabalhadas, numero dependentes, salario bruto, salário líquido e os impostos
	
	printf("Qual é o nome do funcionário?\n");
	scanf("%s", &nome);
	
	printf("Quantas horas o funcionário %s trabalhou?\n", &nome);
	scanf("%f", &nt);
	
	printf("E quais o número de horas dependentes?\n");
	scanf("%f", &nd);
	
	sb= nt*12 + nd*40;
	inss= sb*0.085;
	irs= sb*0.05;
	sl= sb-inss-irs;
	
	printf("O funcionário %s irá receber um salário bruto de %.2f e terá de descontar %.2f para o INSS e %.2f para o IRS.\nSendo assim, o seu salário líquido é de %.2f.", &nome, sb, inss, irs, sl);
	
	return(0);}
