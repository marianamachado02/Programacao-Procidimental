// exercicio 17

#include <stdio.h>
#include<stdlib.h>


int main(){
	int a, b, c;
	
	printf("Insira um numero.\n");
	scanf("%d", &a);
	
	printf("Insira outro numero.\n");
	scanf("%d", &b);
	
	printf("Insira outro numero.\n");
	scanf("%d", &c);
	
	
	if(a>=b && c>=b){
		printf("O menor numero e %d.\n", b);
	}
	
	else if (c>=a){
		printf("O menor numero e %d.\n", a);
	}    
	
	else {
		printf("O menor numero e %d.\n", c);
	}
	
	return (0);
}
