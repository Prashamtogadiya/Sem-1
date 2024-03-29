#include<stdio.h>

void main (){
    int a,i=1;
    printf("Enter a = ");
    scanf("%d",&a);

    while(i<=a)
    {
        if (i % 2 ==1)
        {
            printf("%d\n",i);    
        }
        i=i+1;
        
    }
    
}