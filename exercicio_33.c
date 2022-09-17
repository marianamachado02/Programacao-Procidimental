//Ex 33: Implemente um programa que permita calcular o fatorial de um número
//inteiro, tendo em conta que: n! = n*(n-1)!; com 0! = 1
//Exemplo: 4! = 4*3*2*1* 0! = 24;

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, fat;
	
	printf("Insira um número:\n");
	scanf("%d", &a);
	
	for(fat = 1; a > 1; a = a - 1){
        
		fat = fat * a;}
		
	if(a=0){
		fat=1;;
		printf("O fatorial de %d é %d", a, fat);
	}
	
	else{ printf("O seu fatorial é %d", fat);}
	
	return 0;
}
