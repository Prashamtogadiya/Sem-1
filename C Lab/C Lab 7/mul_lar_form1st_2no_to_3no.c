#include<stdio.h>

void main (){

    int a,b,c;
    printf("Enter a,b,c = ");
    scanf("%d %d %d",&a,&b,&c);

    switch (a > b ? 1 : 2)
    {
    case 1:
        printf("%d * %d = %d",a,c,a*c);
        break;
    case 2:
        printf("%d * %d = %d",b,c,b*c);    
        break;
    default:
        break;
    }
}