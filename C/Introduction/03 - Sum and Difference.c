#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    a = b = 0;
    float c,d;
    c = d = 0.0;

    scanf("%d%d\n%f%f",&a,&b,&c,&d);
    printf("%d %d\n%.1f %.1f",(a+b),(a-b),(c+d),(c-d));
    
    return 0;
}

