#include<stdio.h>

void main(){
    int a,b=1,i=1;
    printf("Enter a = ");
    scanf("%d",&a);

    while (i<=a)
    {
        b= b * (i);
        i++;
    }
    printf("Factorial of number is = %d",b);
}