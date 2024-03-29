#include<stdio.h>

void main (){
    int a,b;
    char c;
    printf("Enter oparator");
    scanf("%c",&c);
    printf("Enter a =");
    scanf("%d",&a);
    printf("Enter b =");
    scanf("%d",&b);
    
    switch (c)
    {
    case '+':
        printf("a + b = %d",a+b);
        break;
    case '-':
        printf("a - b = %d",a-b);
        break;
    case '*':
        printf("a * b = %d",a*b);
        break;
    case '/':
        printf("a / b = %d",a/b);
        break;
    case '%':
        printf("a %% b = %d",a%b);
        break;
    default:
        break;
    }
}


