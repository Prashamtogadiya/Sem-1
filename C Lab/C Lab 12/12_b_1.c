#include<stdio.h>

void main()
{
        int n,i,j,sum,sum1=0;

        printf("Enter value for n = ");
        scanf("%d",&n);

        for(i=1;i<=n;i++)
            {
                sum=0;
                for(j=1;j<=i;j++)
                {
                    sum=sum+j;
                }
                sum1 += sum;
            }

        printf("The Sum of Series up to Value  %d  =  %d \n",n,sum1);

}