#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, *p = arr;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++){
        scanf("%d", arr + i);
    }
    
    for(p = &arr[num-1]; p >= arr; p--)
        printf("%d ", *p);

    return 0;
}
