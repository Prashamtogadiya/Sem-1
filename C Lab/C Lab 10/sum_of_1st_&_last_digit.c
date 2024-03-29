#include<stdio.h>

void main (){
    int firstdigit,lastdigit,n,sum;
    printf("Enter n = ");
    scanf("%d",&n);

    lastdigit = n % 10;
    while (n >= 10)
    {
        n = n / 10;
    }
    firstdigit = n;

    sum = firstdigit + lastdigit;
     
    printf("Sum of first and last digit is = %d",sum);
}