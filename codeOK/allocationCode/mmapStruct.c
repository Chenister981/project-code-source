#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main()
{
    char *map = malloc(140*1024);
    char *map2 = malloc(140*1024);

    printf("Map: %p\n", map);
    printf("Map2: %p\n", map2);

    free(map);
    free(map2);

    printf("Zones allouées via mmap après free\n");
    return 0;
}