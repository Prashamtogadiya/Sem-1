#include<stdio.h>

void main (){
    int x,y,i,j,n,sum=0;


        /*
        for ( i = 1; i <= 5; i++)
        {
            for ( j = 1; j <= 5; j++)
            {
              printf("Enter the arr[%d][%d] = ",x,y);
              scanf("%d",&arr[x][y]);   
            }

        }
*/
        for ( i = 1; i <= 5; i++)
        {
            for ( j = 1; j <= i; j++)
            {
                sum = sum + j + j+1;
                if (j==1)
                {
                    printf("1");
                }
                if (j==i)
                {
                    printf("1");
                }
                
                
            }
            printf("\n");
            printf("%d",sum);
        }
        
        

}