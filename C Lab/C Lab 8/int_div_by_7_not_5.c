#include<stdio.h>

void main(){
    int a,i=100;
                    
    while(i>=100 && i<=200)
    {
         if (i % 7 == 0 && i % 5 !=0)
         {
            printf("%d\n",i);
         }
         i++;
    }
    
}