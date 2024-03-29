#include<stdio.h>

void main(){
    int x,y,z,i=1;
    printf("Enter x = ");
    scanf("%d",&x);
    printf("Enetr y = ");
    scanf("%d",&y);

    while (i<=y)
    {
        z=x * x;
        i++;
    }
    printf("x^y = %d",z);
}