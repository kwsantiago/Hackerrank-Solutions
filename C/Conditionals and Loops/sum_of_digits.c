#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    char str[20], *p = str;
    int sum = 0;
    scanf("%s", str);
    for(; *p; p++)
        sum += *p - '0';

    printf("%d", sum);

    return 0;
}
