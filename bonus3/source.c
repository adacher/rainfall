int main (int argc, char **argv) {
    
    char buffer1[66];
    char buffer2[65]
    char *path = "/home/user/end/.pass";

    file = fopen(path, "r");
    if (file == NULL || argc != 2) {
        return 0;
    }

    fread(buffer1, 1, 66, file);
    int nb = atoi(argv[1]);
    buffer1[nb] = 0; // pas sur %esp, %eax, 1 veux dire nb + 1
    fread(buffer2, 1, 65, file);
    fclose(file);
    if (strcmp(buffer1, nb) == 0) { // Quoi dans la condition
        execl("/bin/sh", "sh", 0);
    } else {
        puts("\n");
    }
    return 0;
}