#include<stdio.h>

void main (){
    int i,j,n=5;

    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= 5; j++)
        {
            while (j>=n)
            {
                /* code */
            
            
            if (j==n)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
            }
        }
         n--;
        printf("\n");
    }
    

}