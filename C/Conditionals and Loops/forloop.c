#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printNum(int i);

void printNum(int i){
    switch(i){
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");    
            break;
    }
    printf("\n");
}

int main() 
{
    int a, b, i;
    scanf("%d\n%d", &a, &b);
  	for(i = a; i <= b; i++){
        if(i >= 1 && i <= 9)
            printNum(i);
        else if(i > 9 && i % 2 == 0)
            printf("even\n");
        else if(i > 9 && i % 2 != 0)
            printf("odd\n");
      }

    return 0;
}

