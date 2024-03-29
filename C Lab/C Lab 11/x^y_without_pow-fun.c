#include<stdio.h>

void main(){
    int x,y,i,j;
    printf("Enter no x = ");
    scanf("%d",&x);
    printf("enter no y = ");
    scanf("%d",&y);
    int temp = x,sum =0;
    for ( i = 0; i < y-1; i++)
    {        
        for ( j = 0; j < x; j++)
        {
            sum = sum + temp; 
        }
        temp = sum;
        sum = 0;
    }
    
    printf("%d",temp);
}