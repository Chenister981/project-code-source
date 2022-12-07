#include <stdio.h>
#include <stdlib.h>

// x/2000wx <adresse of the begining of the heap>
// This code show:
// - The biggest tcache bin
// - The structure of the tcache
// - The count of each entries
int main()
{
    char* a[8];
    char* b[7];

    for(int i = 0; i < 8; i++)
    {
        a[i] = malloc(1032);
    }

    for(int i = 0; i < 7; i++)
    {
        b[i] = malloc(1040);
    }

    for(int i = 0; i < 8; i++)
    {
        free(a[i]);
    }

    for(int i = 0; i < 7; i++)
    {
        free(b[i]);
    }

    printf("Everything is done\n");
    printf("Time to wait\n");
    return 0;
}