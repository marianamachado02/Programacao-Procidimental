#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 34. Implemente um programa que verifique se um n�mero � ou n�o primo.


int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, i, resultado=0;
	
	printf("Insire um n�mero:\n");
	scanf("%d", &num);
	
	for (i = 2; i<= num/2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0)
    printf("%d � um n�mero primo\n", num);
 else
    printf("%d n�o � um n�mero primo\n", num);
 
 return 0;
}

