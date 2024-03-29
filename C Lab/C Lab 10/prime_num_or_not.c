#include<stdio.h>

void main()
{
  int i=2,n,prime=0;

  printf("Enter the number:");
  scanf("%d",&n);

  while(i<n)
  {
    if(n%i==0)
    {
      prime++;
    }
    i++;
  }

  if(prime==0)
  {
    printf("\nThis number is Prime");
  }
  else
  {
    printf("\nThis number is Not Prime");
  }
  
}