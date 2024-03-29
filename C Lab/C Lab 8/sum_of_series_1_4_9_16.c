#include<stdio.h>

void main (){
    int a,sum=0,i=1;

    printf("Enter a = ");
    scanf("%d",&a);

    while (i<=a)
    {
        sum = sum + (i * i);
        i++;
    }
      printf("Sum = %d",sum);

}