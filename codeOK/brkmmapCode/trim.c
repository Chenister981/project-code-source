#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <malloc.h>

// This code show TRIM_THRESHOLD works.
int main()
{   
    // Just uncomment to modify THRIM_THRESHOLD
    // We use a high value so we are sure that TRIM_TRESHOLD works
    //mallopt(-1, 400*1024);

    printf("Malloc\n");
    char* chunk = malloc(120*1024);
    char* chunk2 = malloc(110*1024);
    printf("chunk2: %p\n", chunk2);
    printf("Free\n");
    free(chunk2);

    printf("Done\n");
    return 0;
}
