#include<stdio.h>

void main(){
    int i,j,n;

    for ( i = 1; i <= 5; i++)
   {
        for ( j = 1; j > 5; j--)
        {
                printf(" ");
              
        }

        for ( n = 5; n <= 1; n--)
        {
            printf("* ");
        }
        printf("\n");
}
}