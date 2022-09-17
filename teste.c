#include <stdio.h>
#include <stdlib.h>
void x2(int* x){
	*x=2*(*x);
}


int _x2(int x){
	x=2(x);
	return x;
}

int main(){
	int y=3;
	x2(&y);
	return y;
	
}
