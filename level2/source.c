#include <stdio.h>
#include <string.h>

void p (void) {
    char data[64];
    unsigned int ret;
    fflush(stdout);
    gets(data);
    ret = __builtin_return_address(0);
    if ((ret & 0xb0000000) == "b0000000") {
        printf("%p\n", ret);
        exit(1);
    }
    puts(data);
    strdup(data);
    return ;
}

int main (void) {
    p();
    return;
}
