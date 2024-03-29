#include<stdio.h>

void main (){
    int a,b,sum=0,rem;
    printf("Enter a = ");
    scanf("%d",&a);

    while (a!=0)
    {
        rem = a % 10;
        sum = sum * 10 + rem;
        a = a/10;
    }
    a=sum;
    
    while (a>0)
    {
        b=a%10;
        if (b==0)
        {
            printf("Zero");
        }
        else if (b==1)
        {
            printf("One");
        }
        else if (b==2)
        {
            printf("Two");
        }
        else if (b==3)
        {
            printf("Three");
        }
        else if (b==4)
        {
            printf("Four");
        }
        else if (b==5)
        {
            printf("Five");
        }
        else if (b==6)
        {
            printf("Six");
        }
        else if (b==7)
        {
            printf("Seven");
        }
        else if (b==8)
        {
            printf("Eight");
        }
        else if (b==9)
        {
            printf("Nine");
        }
        a=a/10;
        
    }
    
}