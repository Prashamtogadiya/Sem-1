#include<stdio.h>

void main(){

    int a,h,b;
    printf("Enter value of height = ");
    scanf("%d", &h);
    printf("Enter value of breadth = ");
    scanf("%d", &b);

    a=(h*b)/2;
    printf("Area of triangle = %d", a);
    
}
