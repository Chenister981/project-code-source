#include <stdio.h>
#include <stdlib.h>

// x/2100wx adresse of the begining of the heap
// This code show:
// - the internal structure of a free chunk
// - The coalescing
// - The coalescing with the top chunk.
int main()
{
    char* a[7];
    for(int i = 0; i < 7; i++)
    {
        a[i] = malloc(1040);
    }

    for(int i = 0; i < 7; i++)
    {
        free(a[i]);
    }
    printf("Free done\n");
    printf("Time to test\n");
    return 0;
}