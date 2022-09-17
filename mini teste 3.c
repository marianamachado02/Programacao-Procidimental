//Escreva um programa que indique se um número inteiro inserido pelo utilizador é simultaneamente divisível por 3 e par.
//
//O programa deve testar números até o utilizador inserir 0 (zero). No final o vetor com todos os números pares e divisíveis por 3 deve ser apresentado no ecrã.
//
//Implemente para o efeito funções, nomeadamente uma função que indique se um número inteiro é divisível pelo inteiro N.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int divisivel(int x){
	int resto;
	
	resto=x%3;
	
	return resto;}
	
int par(int x){
	int resto;
	
	resto=x%2;
	
	return resto;}


int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, k;
	int a, vetor[100];
	
	do{ i++;
	
		if (i!=1){
			system("pause");
			system("cls");}
			
		printf("Insira um número:\n");
		scanf("%d", &a);
		
		if(divisivel(a)==0 && par(a)==0 && a!=0){ k++;
			printf("O número é divisível por 3 e par.\n");
			vetor[100]=a;}
			
		else if(divisivel(a)==0 && par(a)!=0 && a!=0){
			printf("ERRO: O número é divisível por 3, mas não é par.\n");}
			
		else if(divisivel(a)!=0 && par(a)==0 && a!=0){
			printf("ERRO: O número não é divisível por 3, mas é par.\n");}
			
		else if(divisivel(a)!=0 && par(a)!=0 && a!=0){
			printf("ERRO: O número não é divisível por 3, nem par.\n");}
		
	}while(a!=0);
	
	
	
	printf("Foram apresentados %d números, sendo %d deles divisíveis por 3 e pares.\n", i, k);
	printf("Os números divisíveis por 3 e pares que foram apresentados são: %d.\n", vetor[100]);
	
	
	return 1;
}


