#include<stdio.h>

void main(){
    int a,i=1,sum=0;
    printf("Enter a = ");
    scanf("%d",&a);

    while (i<=a) 
    {
    
        sum = sum + i;
        i++;
    }
    printf("sum = %d\n",sum);
        
}