/* Nome: Mariana Bessa Machado
Data: 28-10-2021
Titulo: Mini-teste 1
Disciplina: Programa��o procidimental */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	char nome[20];
	float nt, nd, sb, sl, inss, irs; // numero de horas trabalhadas, numero dependentes, salario bruto, sal�rio l�quido e os impostos
	
	printf("Qual � o nome do funcion�rio?\n");
	scanf("%s", &nome);
	
	printf("Quantas horas o funcion�rio %s trabalhou?\n", &nome);
	scanf("%f", &nt);
	
	printf("E quais o n�mero de horas dependentes?\n");
	scanf("%f", &nd);
	
	sb= nt*12 + nd*40;
	inss= sb*0.085;
	irs= sb*0.05;
	sl= sb-inss-irs;
	
	printf("O funcion�rio %s ir� receber um sal�rio bruto de %.2f e ter� de descontar %.2f para o INSS e %.2f para o IRS.\nSendo assim, o seu sal�rio l�quido � de %.2f.", &nome, sb, inss, irs, sl);
	
	return(0);}
