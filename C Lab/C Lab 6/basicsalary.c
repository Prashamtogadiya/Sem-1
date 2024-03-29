#include<stdio.h>

void main (){
          
     float basic,groce,da,hra;

     printf("Enter basic salary =  ");
     scanf("%f", &basic);
    
    if (basic>=10000 )
    {
        hra = 0.2 * basic;
        da = 0.8 * basic; 
    }
    else if (basic>=20000 )
    {
        hra = 0.25 * basic;
        da = 0.9 * basic;
    }
    else if (basic>=30000 )
    {
        hra = 0.3 * basic;
        da = 0.95 * basic;
    }
    else if (basic<10000)
    {
        hra = 0.15 * basic;
        da = 0.07 * basic;
    }
    
    groce=basic+hra+da;

    printf("groce salary = %f", groce);
    
}