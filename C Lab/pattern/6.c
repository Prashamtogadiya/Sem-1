#include<stdio.h>

void main (){
    int i,j,n=i+j;

    for ( i = 1; i <=5 ; i++)
    {
        for ( j = 1; j <=i ; j++)
        {
            if (n%2==0)
            {
                printf("1");
            }
            else{
                printf("0");
            }
            n++;
        }
        printf("\n");
    }
    
}