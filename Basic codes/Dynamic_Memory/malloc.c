#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    // Dynamically allocation of memory
    // ptr = (int *)malloc(n * sizeof(int));
    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        printf("\n Memory is not allocated\n");
        exit(0);
    }
    else
    {
        printf("Memory allocation is sucessfull\n");
        for (int i = 0; i < n; i++)
        {
            ptr[i] = i + 1;
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d\n", ptr[i]);
        }
    }
    free(ptr);
    return 0;
}