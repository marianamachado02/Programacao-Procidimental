// exercício 3

#include <stdlib.h> 
#include <stdio.h> 

int main(void) 
{

    int x, y, z;
    /* Requesting the two number from the user */
    printf("insert two integer values:");
    scanf("%d %d", &x, &y);
    /* adding the two values */
    z= x + y;
    /*priting the result*/
    printf("%d + %d = %d\n", x, y, z);

system("pause");    //ask the system to pause before exiting
exit (0);
}

