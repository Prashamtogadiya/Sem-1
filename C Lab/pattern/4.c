#include<stdio.h>

void main (){
    int i,j,n=5;

    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            printf("*");
        }
        n--;
        printf("\n");
    }
    
}