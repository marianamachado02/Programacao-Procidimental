//35. Implemente um programa que, dado um n�mero natural n, apresente no ecr�
////os n primeiros n�meros da sequ�ncia de Fibonacci.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	
	printf("Insira um n�mero:");
	scanf("%d", &a);
	
	if(a==1 || a==2){
		printf("O n�mero � 1.");
	}	
	
	else{
		b=(a-1)+(a-2);
		printf("O n�mero � %d.", b);
	}
	
	return(0);
}
