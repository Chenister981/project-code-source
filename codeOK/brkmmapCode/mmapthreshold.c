#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <malloc.h>

// This code show how we can modify MMAP_THRESHOLD
int main()
{
    // To test just uncomment mallopt
    //mallopt(-3, 140*1024);

    printf("Malloc\n");
    char* chunk = malloc(135*1024);
    chunk[0] = 'a';
    printf("chunk: %p\n", chunk);

    printf("Free\n");
    free(chunk);

    printf("Done\n");
    return 0;
}