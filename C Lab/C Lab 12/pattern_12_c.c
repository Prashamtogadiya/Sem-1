#include<stdio.h>

void main(){
    int i,j,n=5;

        /*

        Pattern
        5
        54
        543
        5432
        54321

        */

    for ( i = 1; i <= 5; i++)
       {
          for ( j = 1; j <= i; j++)
          {
            printf("%d",n);
            n--;
          }
          n=5;
          printf("\n");
       }

}