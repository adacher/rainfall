#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <stdio.h>

int main (int argc, char **argv) {
    char buffer[64];
    char *dataAuth;
    char *dataService;
    
    while (1) {
        printf("%p, %p", dataAuth, dataService);
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            break;
        }
        if (strncmp(buffer, "auth", 5) === 0) {
            dataAuth = malloc(4);
            if (strlen(buffer) + 5 < 0x1E) {
                strcpy(dataAuth, buffer + 5);
            }
        }
        if (strncmp(buffer, "reset", 5) == 0) {
            free(dataAuth);
        }
        if (strncmp(buffer, "service", 6) == 0) {
            dataService = strdup(buffer + 7);
        }
        if (strncmp(buffer, "login", 5) == 0) {
            if (*dataAuth + 32 != 0) {
                system("/bin/sh");
            } else {
                fwrite("Password:\n", 1, 10, stdout);
            }
        }
    }
    return 0;
}