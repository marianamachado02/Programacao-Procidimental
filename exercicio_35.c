//35. Implemente um programa que, dado um número natural n, apresente no ecrã
////os n primeiros números da sequência de Fibonacci.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	
	printf("Insira um número:");
	scanf("%d", &a);
	
	if(a==1 || a==2){
		printf("O número é 1.");
	}	
	
	else{
		b=(a-1)+(a-2);
		printf("O número é %d.", b);
	}
	
	return(0);
}
