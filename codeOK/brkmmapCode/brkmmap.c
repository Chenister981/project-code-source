#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

// This code show:
// - How sbrk() works
// - Show the mmap threeshold

int main()
{
    printf("Process started with pid %d\n", getpid());

    char *p1 = malloc(127 * 1024);
    printf("Invoked malloc(127*1024). %p\n", p1);

    char *p2 = malloc(128 * 1024);
    printf("Invoked malloc(128*1024). %p\n", p2);

    return 0;

}