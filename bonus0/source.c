void p(char *msg, char *str) {
    char buffer[4096];
    
    puts(str);
    read(0, buffer, 4096);
    *strchr(buffer, "\n") = 0;
    strncpy(msg, buffer, 20);
}

void pp(char *data) {
    char msg1[48];
    char msg2[28];
    p(msg1, " - ");
    p(msg2, " - ");
    strcpy(msg1);
    strlen();
    strcat(data, msg2);
}

int main() {
    char data[64];

    pp(data);
    puts(str);
    return 0;
}