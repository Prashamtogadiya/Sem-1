#include<stdio.h>

void main (){

     char ch;
     printf("Enter Value = ");
     scanf("%c",&ch);

    switch ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') ? 1 : 2)
    {
    case 1:
        printf("Given value is an alphabet");
        break;
    case 2:
        printf("given value is not an alphabet");   
        break; 
     default:
        break;
    }
}