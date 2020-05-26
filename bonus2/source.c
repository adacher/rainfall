int l = 0;

void greetuser (char *str) {
    char msg[20];
    if (l == 1) {
        msg = "Hyvää päivää ";
    } else if (l == 2) {
        msg = "Goedemiddag! ";
    } else {
        msg = "Hello ";
    }
    strcat(msg, str);
    puts(msg);
}

int main (int argc, char **argv) {
    char buffer[40];
    char buffer[32];

    if (argc === 3) {
        strncpy(buffer1, argv[1], 40);
        strncpy(buffer2, argv[2], 32);
        if (l) {
            if (memcmp(l, "fi", 2) == 0) {
                l = 1;
            } else if (memcmp(l, "nl", 2) == 0) {
                l = 2;
            }
        }
        greetuser(argv[1])
    }
    return 0;
}