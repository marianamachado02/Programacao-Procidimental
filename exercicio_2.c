// exercício 2

#include <stdlib.h> 
#include <stdio.h> 

int main(void) {

int altura, base, area, perimetro;

altura=3;
base=8;
area=altura*base;
perimetro= 2*(base + altura);

printf("o valor do perimetro do retangulo a %d e a area e %d \n", area, perimetro);

return 0;
}
