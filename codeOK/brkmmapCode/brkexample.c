#include <stdio.h>
#include <unistd.h>

// This code show the use of srbk()
int main()
{
    void *first = sbrk(0);
    void *second = sbrk(4096);
    void *third = sbrk(0);
    void *fourth = sbrk(-4096);
    void *fifth = sbrk(0);

    printf("First: %p\n", first);
    printf("Second: %p\n", second);
    printf("Third: %p\n", third);
    printf("Fourth: %p\n", fourth);
    printf("Fifth: %p\n", fifth);
}