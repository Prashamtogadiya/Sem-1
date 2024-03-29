#include<stdio.h>

void main(){
    int a,b,c;
    printf("Enetr a = ");
    scanf("%d", &a);
    printf("Enetr b = ");
    scanf("%d", &b);
    printf("Enetr c = ");
    scanf("%d", &c);

    if (a>b)
    {
        if (a>c)
        {
            if ()
            {
                /* code */
            }
            else if (/* condition */)
            {
                /* code */
            }
            else
            {
                /* code */
            }
            
            printf("Second largest number = %d",c);
        }
        else 
        {
            printf("Second largest number = %d",a);
        }
    }
    else if (b>c)
    {
        printf("Second largest number = %d",c);
    }
    else
    {
        printf("Second largest number = %d",b);
    }
    
    }
    