#include<stdio.h>

void main (){
    int a,i,r,sum=0;
    printf("Enter Number =  ");
    scanf("%d",&a);
    i=a;
    while (a != 0)
    {
        r=a % 10;
        sum=sum*10+r;
        a = a/10;   
    }

    if (sum == i)
    {
        printf("%d is palindrome number ",i);
    }
    else{
        printf("%d is not palindrome number ",i);
    }
    
    
}