#include<stdio.h>

void main(){
    int factors,a,i=1;
    printf("Enter a = ");
    scanf("%d",&a);

    while (i<=a)
    {
        if (a%i==0)
        {
            factors=i;
            printf("%d\n",factors);
        }
        i++;
    }
    
}