#include<stdio.h>

void main(){
    int n,i,fac=1;
    printf("Enter no = ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        fac *= i;

    }
    printf("Factorial of %d = %d",n,fac);
    
}