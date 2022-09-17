// exercício 16

#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int a, b;
	
	printf("Insira um numero.\n");
	scanf("%d", &a);
	
	printf("Insira outro numero.\n");
	scanf("%d", &b);
	
	
	if(a>b){
		printf("O menor numero e %d.\n", b);
	}
	
	else {
		printf("O menor numero e %d.\n", a);
	}
	
	return (0);
}

