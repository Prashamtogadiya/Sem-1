#include<stdio.h>

int main()
{
  int i=2,n;

  printf("Enter the number:");
  scanf("%d",&n);

  while (i<n)
  {
       if(n%i==0){
        printf("This number is not prime");
        return 0;
       }
       i++;
  }
        printf("This is prime number");
  
}