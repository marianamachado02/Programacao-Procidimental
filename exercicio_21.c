//Exerc�cio 21
//Implemente um programa que permita, atrav�s da inser��o da dimens�o dos 
//lados de um tri�ngulo, verificar se se trata de um tri�ngulo ret�ngulo.
//Sugest�o: verificar atrav�s do Teorema de Pit�goras efetuando os c�lculos com uma 
//aproxima��o de 0,01.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float lado1, lado2, lado3;
	
	printf("Insira os lados do tri�ngulo:\n");
	scanf("%f %f %f", &lado1, &lado2, &lado3);
	
	if(lado1*lado1==lado2*lado2+lado3*lado3 || lado2*lado2==lado1*lado1+lado3*lado3 || lado3*lado3==lado2*lado2+lado1*lado1){printf("O tri�ngulo � ret�ngulo");}
	
	else{ printf("O tri�ngulo n�o � ret�ngulo.");}
	
	return 0;}
