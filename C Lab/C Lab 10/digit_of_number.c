#include<stdio.h>

void main ()
{
    int i,dig,num;
    printf("Enter number = ");
    scanf("%d",&num);
    while(num>0)
    {
        dig = num%10;
        printf("%d\n",dig);
        num = num/10;
    }
}