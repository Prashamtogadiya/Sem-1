#include<stdio.h>

void main (){
    int i,j,x=5;

    /*

        12345
        1234
        123
        12
        1

    */

    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= x; j++)
        {
            printf("%d",j);
        }
        x--;

    
        printf("\n");
        
    }
    
}