#include<stdio.h>

void main(){
    char ch=65;

    while ((ch>=65 && ch<=90) )
    {
        printf("%c\n",ch);
        ch++;
    }
    ch=97;
    while ((ch>=97 && ch<=122) )
    {
        printf("%c\n",ch);
        ch++;
    }
}