// exercicio 18

#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	//rand() d� um inteiro aleat�rio entre 0 e 32767
	num=rand();
	printf("%d\n", num);
	
	return(0);
}
