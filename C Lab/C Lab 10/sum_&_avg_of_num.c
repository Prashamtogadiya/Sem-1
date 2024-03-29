#include<stdio.h>

void main (){
    int n,i=0,val;
    float sum=0;

    printf("how many number's sum and average you want = ");
    scanf("%d",&n);
    while (i<n)
    {
        printf("%d : ",i+1);
        scanf("%d",&val);
        sum = sum + val;
        i++;
    }
    printf("sum = %.2f",sum);
    printf("avg = %.2f",(sum/n));
    
}