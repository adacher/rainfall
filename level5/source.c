#include <stdio.h>
#include <stdlib.h>

void o (void) {
    system("/bin/sh");
    exit(1);
}

void n (void) {
    char buffer[64];

    fgets(buffer, 64, stdin);
    printf(buffer);
    exit(1);
}

int main(void) {
    n();
    return 0;
}