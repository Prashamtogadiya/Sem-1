#include<stdio.h>

void main (){

    int a,b,i,temp;
   
    printf("Enter a = ");
    scanf("%d",&a);
    printf("Enter b = ");
    scanf("%d",&b);

    if (a>b)
    {
        temp=a;
        a=b;
        b=temp;
        i=a;
    }
    
    
    while (i>=a && i<=b)
    {
        
        if (i % 2 == 0)
        {
            printf("%d\n",i);
        }
        i=i+1;
    }
    

}