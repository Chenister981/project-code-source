#include <stdio.h>
#include <unistd.h>

// This code show that if we go beyond the heap, we create a seg fault
int main()
{
    void *first = sbrk(0);
    void *second = sbrk(4096);
    void *third = sbrk(0);

    int *ptr = (int *)third+1;
    *ptr = 10;

    printf("First: %p\n", first);
    printf("Second: %p\n", second);
    printf("Third: %p\n", third);
}