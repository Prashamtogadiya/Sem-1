#include <stdio.h>
void main()
{
    int n,original_num,remainder,result = 0;
    printf("Enter a three digit number: ");
    scanf("%d", &n);
    original_num = n;

    while (original_num != 0) 
    {
       remainder = original_num % 10;
       result = result + (remainder * remainder * remainder);
       original_num = original_num / 10;
    }

    if (result == n)
    {
        printf("%d is an Armstrong number", n);
    }
    else
    {
        printf("%d is not an Armstrong number", n);
    }
}