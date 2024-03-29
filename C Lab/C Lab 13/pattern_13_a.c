#include<stdio.h>

void main (){
    int i,j,n=5;

    /*

        *****
        ****
        ***
        **
        *

    */

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("*");
        
        }
        n--;
        printf("\n");
        
    }
    
}