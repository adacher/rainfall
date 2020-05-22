#include <stdio.h>

void p(char *txt) {
    printf(txt);
}

void n(void) {
    char buffer[64];

    const i = 0;
    fgets(buffer, 64, stdin);
    p(buffer);
    if (16930116 == i) {
        system("/bin/cat /home/user/level5/.pass");
    }
    return
}

int main(void) {
    n();
    return 0;
}