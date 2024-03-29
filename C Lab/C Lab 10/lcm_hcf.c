#include<stdio.h>

void main (){
    int a,b,max,gcd,i=1;
    printf("Enter number a = ");
    scanf("%d",&a);
    printf("Enter number b = ");
    scanf("%d",&b);
    
    max=a>b?a:b;
    while (1)
    {
        if (max%a==0 && max%b==0)
        {
            printf("%d is LCM of this number",max);
            break;
        }
        max++;
    }

    while (i<=a)
    {
        if (a%i==0 && b%i==0)
        {
            if (i>gcd)
            {
                gcd = i;
            }
            
        }
        i++;
    }
    printf("%d is gcd ",gcd);
    
    
}