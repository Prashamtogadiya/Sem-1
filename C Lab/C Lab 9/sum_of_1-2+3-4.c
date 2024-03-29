#include<stdio.h>

void main (){

    int a,i=1;
    int sum=0;
    printf("Enter a = ");
    scanf("%d",&a);

    while (i<=a)
    {
        if (i%2==0)
        {
            sum=sum-i;
        }
        else
        {
            sum=sum+i;
        }
        i++;

    }
        printf("%d",sum);
    

}