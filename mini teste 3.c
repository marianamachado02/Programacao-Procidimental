//Escreva um programa que indique se um n�mero inteiro inserido pelo utilizador � simultaneamente divis�vel por 3 e par.
//
//O programa deve testar n�meros at� o utilizador inserir 0 (zero). No final o vetor com todos os n�meros pares e divis�veis por 3 deve ser apresentado no ecr�.
//
//Implemente para o efeito fun��es, nomeadamente uma fun��o que indique se um n�mero inteiro � divis�vel pelo inteiro N.

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
			
		printf("Insira um n�mero:\n");
		scanf("%d", &a);
		
		if(divisivel(a)==0 && par(a)==0 && a!=0){ k++;
			printf("O n�mero � divis�vel por 3 e par.\n");
			vetor[100]=a;}
			
		else if(divisivel(a)==0 && par(a)!=0 && a!=0){
			printf("ERRO: O n�mero � divis�vel por 3, mas n�o � par.\n");}
			
		else if(divisivel(a)!=0 && par(a)==0 && a!=0){
			printf("ERRO: O n�mero n�o � divis�vel por 3, mas � par.\n");}
			
		else if(divisivel(a)!=0 && par(a)!=0 && a!=0){
			printf("ERRO: O n�mero n�o � divis�vel por 3, nem par.\n");}
		
	}while(a!=0);
	
	
	
	printf("Foram apresentados %d n�meros, sendo %d deles divis�veis por 3 e pares.\n", i, k);
	printf("Os n�meros divis�veis por 3 e pares que foram apresentados s�o: %d.\n", vetor[100]);
	
	
	return 1;
}


