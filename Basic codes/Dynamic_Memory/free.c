#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, *ptr1;
    int n = 5;
    printf("The value of n is: %d", n);
    ptr = (int *)malloc(n * sizeof(int));
    ptr1 = (int *)calloc(n, sizeof(int));
    if (ptr == NULL || ptr1 == NULL)
    {
        printf("Memory is not allocated");
        exit(0);
    }
    else
    {
        printf("Memory allocation is sucessfull\n");
        free(ptr);
        printf("Ptr is deallocated\n");
        free(ptr1);
        printf("ptr1 is also deallocated");
    }
    return 0;
}