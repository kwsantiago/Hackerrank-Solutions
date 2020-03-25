#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sum = 0, len;
    scanf("%d", &len); // get amount of numbers to be input
    int arr[len], *p = arr;
    for(; p < &arr[len]; p++) // set whole array to 0
        *p = 0;
    p = arr; // reset pointer to start of array
    for(; p < &arr[len]; p++) // get numbers
        scanf("%d", p); // add to array
    p = arr; // reset pointer to start of array
    for(; p < &arr[len]; p++)
        sum += *p;
    printf("%d", sum);
    return 0;
}
