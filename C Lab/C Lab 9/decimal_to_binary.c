#include<stdio.h>

void main (){

    int n,rem,fac=0,i=1;
    printf("Enter decimal value = ");
    scanf("%d",&n);

    while (n != 0)
    {
        rem = n % 2;
        n = n/2;
        printf("%d",rem);
    }

    while (rem != 0)
    {
        rem = rem % 10;
        fac = fac * 10 + rem;
        rem = rem/10;

    }
    printf("%d",rem);        
}