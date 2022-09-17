#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y);

int main()
{
	int a = 0, b = 0;
	
	printf("Insira 2 numeros pra somar \n");
	scanf("%d %d", &a, &b);

	 printf("%d", soma(a,b));
	
	
	
	
	return 0;
}

int soma(int x, int y){
	return x + y;
}
