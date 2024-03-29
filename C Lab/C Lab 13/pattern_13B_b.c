#include<stdio.h>


void main()
{
    int i = 0, j = 0, n=10;
    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (n % 2 == 0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
            n++;
        }
        printf("\n");
    }
}