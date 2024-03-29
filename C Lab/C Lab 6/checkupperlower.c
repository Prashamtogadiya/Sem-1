#include<stdio.h>

void main (){
    char ch;
    printf("Enter value");
    scanf("%d", &ch);

    if (ch>='A' && ch<='Z')
    {
        printf("Upper case");
    }
    else if (ch>='a' && ch<='z')
    {
        printf("Lower case");
    }
    else if (ch>='0' && ch<='9')
    {
        printf("Digit");
    
    }
    else
    {
        printf("Special oprator");
    }
    
}