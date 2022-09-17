//Exercício 21
//Implemente um programa que permita, através da inserção da dimensão dos 
//lados de um triângulo, verificar se se trata de um triângulo retângulo.
//Sugestão: verificar através do Teorema de Pitágoras efetuando os cálculos com uma 
//aproximação de 0,01.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float lado1, lado2, lado3;
	
	printf("Insira os lados do triângulo:\n");
	scanf("%f %f %f", &lado1, &lado2, &lado3);
	
	if(lado1*lado1==lado2*lado2+lado3*lado3 || lado2*lado2==lado1*lado1+lado3*lado3 || lado3*lado3==lado2*lado2+lado1*lado1){printf("O triângulo é retângulo");}
	
	else{ printf("O triângulo não é retângulo.");}
	
	return 0;}
