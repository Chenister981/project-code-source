#include <stdio.h>
#include <stdlib.h>

#define ONEGB (1 << 30)

int main() {
    int count = 0;

    while (1)
    {
        if(malloc(ONEGB) == NULL)
        {
            printf("Malloc refused after %d GB\n", count);
            return 0;
        }
        printf("Got %d GB\n", ++count);
    }
    
}