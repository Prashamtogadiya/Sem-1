#include<stdio.h>
main()
{
      int a,b,c;
      char run;
      printf("Enter first number : ");
      scanf("%d",&a);
      printf("Enter second number : ");
      scanf("%d",&b);
      printf("Enter  any operator from + , - , * , / ");
      scanf(" %c",&run);
             if(run=='+')
                  {
                    c=a+b;   
                    printf("Sum of %d and %d = %d ",a,b,c);
                  }
             else if(run=='-')
                  {
                    c=a-b;   
                    printf("Subtraction of %d and %d = %d ",a,b,c);
                  }
                     
             else if(run=='*')
                  {
                    c=a*b;   
                    printf("Multiplication of %d and %d = %d",a,b,c);
                  }
   
            else if(run=='/')
                  {
                    c=a/b;   
                    printf("%d divided by %d = %d ",a,b,c);
                  } 

            else
                  {
                    printf("Invalid oprator");
                  }
            }