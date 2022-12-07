#include <stdio.h>

// ce bout de code montre :
// - La structure interne d'un chunk alloué
// - La taille minimum qui est alloué
// - Le top chunk
// - L'allignement de 16 bytes
int main()
{
    char *chunk;
    chunk = malloc(1);
    char *chunk2;
    chunk2 = malloc(24);
    char *chunk3 = malloc(25);
    printf("Chunk addresse : %p", chunk);
    printf("Remplissage");
    return 0;
}