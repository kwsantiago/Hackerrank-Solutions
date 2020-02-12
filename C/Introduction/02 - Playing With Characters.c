#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[10];
    char sen[20];
    scanf("%c%s%s",&ch,&s,&sen);
    if(ch=='H')
    printf("%c\n%s\n%s are you?",ch,s,sen);
    else if(ch=='z')
    printf("%c\n%s\n%s is fun.",ch,s,sen);
    else
    printf("%c\n%s\n%s To C!!",ch,s,sen);

}

