#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ONEGB (1 << 30)

int main() {
    int count = 0;

    while (1)
    {
        int *p = malloc(ONEGB);
        if(p == NULL)
        {
            printf("Malloc refused after %d GB\n", count);
            return 0;
        }
        memset(p,1,ONEGB);
        printf("Got %d GB\n", ++count);
    }
    
}