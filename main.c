#include <stdio.h>
#include <stdlib.h>

int main()
{ int i;
    int array[10] ;
    for ( i=0; i<=10; i++)  {
            if (i % 2 == 1)
                array[i]=1 ;
                else array[i]=0;
    }
    //i= 1 ;
    int k=0;
    while (k !=10) {
        printf("%d ", array[k]);

        k++;
    }
    //printf ("%d\n", array[2]);
    return 0;
}