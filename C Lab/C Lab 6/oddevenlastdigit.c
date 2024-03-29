#include<stdio.h>

void main (){
    int a,b,c;

    printf("Enetr no = ");
    scanf("%d",&a);

    b=a%10;

    if (b%2!=0)
    {
        printf("Last digit is odd");
    }
    else
    {
        printf("Last digit is even");
    }
}