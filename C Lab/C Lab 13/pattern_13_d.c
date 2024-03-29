#include<stdio.h>

void main (){
    int i,j,k,n=1;

    /*

         1
        1 2
       1 2 3 
      1 2 3 4 
     1 2 3 4 5       

    */

   for ( i = 1; i <= 5; i++)
   {
        for ( j = 5; j > i; j--)
        {
                printf(" ");
              
        }
        
        for ( k = 1; k <= i; k++)
        {
            printf("%d ",n);
            n++;
        }
        n=1;
        
    
        printf("\n");
   }
   
}