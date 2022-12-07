#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <malloc.h>

// This code show how to modify the TOP_PAD parameter.
int main()
{
    // Just uncomment the mallopt to modify the TOP_PAD parameter.
    //mallopt(-2, 20*1024);

    printf("Malloc\n");
    char* chunk = malloc(100);

    printf("Free\n");
    free(chunk);

    printf("Done\n");
    return 0;
}