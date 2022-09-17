#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	/*int k,a, soma;
	soma= 0;
	
	printf("Insira um valor:\n");
	scanf("%d", &a);
	
	for(k=2; k<=a; k=k+2){
		soma=soma+k;
	}
	printf("A soma dos %d primeiros pares vale %d.\n", a, soma);
	
	return(0);*/
	
	int contador;
	soma=0;
	
	/*while(contador<20){
		contador=contador+1;
		soma=soma+2*contador;
	}*/
	
	soma=0;
	contador=0;
	do {
		contador=contador+1;
		soma=soma+2*contador;}
		
	}
	while(contador<20);
	
	
}
