#include<stdio.h>

void main(){
    int unit;
    float total_bill;

    printf("Enter unit = ");
    scanf("%d", &unit);

    if (unit<=50)
    {
       total_bill=unit*0.50; 
    }
    else if (unit>50 && unit<=150)
    {
        total_bill=50*0.50 + (unit-50) * 0.75;
    }
    else if (unit>150 && unit<=250)
    {
        total_bill=50*0.50 + 100*0.75 +(unit-150)*1.20;
    }
    else
    {
        total_bill=50*0.50 + 100*0.75 + 150*1.20 + (unit-250)*1.50;
    }

    total_bill=total_bill+(total_bill*0.2);
    printf("total_bill = %f",total_bill);
    
    
    
    

}