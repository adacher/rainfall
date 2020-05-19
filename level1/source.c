#include <stdio.h>
#include <stdlib.h>

int    run() {
    fwrite("Good... Wait what?\n", 1, 19, stdout);
    return system("/bin/sh");
}

int main (int argc, char **argv) {

    char get_string[64];

    gets(get_string);
    return 0
}