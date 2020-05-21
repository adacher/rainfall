#include <stdio.h>
#include <stdlib.h>

void    v(void) {
    char buffer[64];
    int i = 0;
    fgets(buffer, 64,stdin);
    printf(buffer);
    if (i == 64) {
        fwrite("Wait what?!\n", 1, 12, stdout);
        system("/bin/sh");
        exit(1);
    }
}

int main(void) {
    v();
    return 0;
}