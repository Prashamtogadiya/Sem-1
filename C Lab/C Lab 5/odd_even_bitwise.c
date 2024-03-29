#include<stdio.h>

void main(){
    int a;
    printf("Enter No. = ");
    scanf("%d", &a);
    if (a & 1)
    {
        printf("No is odd");
    }
    else 
    {
        printf("No is even");
    }
    
}