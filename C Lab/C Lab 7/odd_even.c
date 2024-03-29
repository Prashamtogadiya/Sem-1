#include<stdio.h>

void main (){
    int a;
    printf("Enter a = ");
    scanf("%d",&a);

    switch (a % 2==0 ? 1 : 2 )
    {
    case 1:
        printf("%d is even",a);
        break;
    case 2:
        printf("%d is odd",a);
        break;    
    default:
        break;
    }

    }