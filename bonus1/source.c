int main(int argc, char **argv)
{
    char buffer[40];
    int i;

    i = atoi(argv[1]);
    if (i <= 9)
    {
        memcpy(buffer, argv[2], i * 4); // 40, 40 + 4, 44
        if (i == 1464814662)
        {
            execl("/bin/sh");
        }
    }
    return 0;
}