#include<stdio.h>

void main (){

    int a,b,c,d;
    printf("Enter a = ");
    scanf("%d",&a);
    printf("Enter b = ");
    scanf("%d",&b);
    printf("Enter c = ");
    scanf("%d",&c);

    switch (a > b && a > c ? 1 : (b > a && b > c ? 2 : 3))
    {
    case 1:
        printf("%d is largest",a);
        break;
    case 2:
        printf("%d is largest",b);
        break;
    case 3:
        printf("%d is largest",c);
        break;        
    default:
        break;
    }
    
}