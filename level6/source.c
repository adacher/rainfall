#include <stdio.h>
#include <stdlib.h>

int n (void) {
    system("cat /home/user/level07/.pass");
}

int m (void) {
    puts("Nope");
}

int main (int argc, char **argv) {

    char *a;
    char *b;

    a = malloc(72);
    b = malloc(72);
    strcpy(a, argv[1]);
    // un call a faire
    return 0;
}