#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main(int argc, char **argv) {
    int nb;
    uid_t gid;
    uid_t uid;
    char str[] = "No !\n";
    int i;
    char *args[2];

    nb = atoi(argv[1]);
    if (nb == 423) {
        args[0] = strdup("/bin/sh");
        args[1] = 0;
        groupid = getegid();
        userid = geteuid();
        setresgid(groupid, groupid, groupid);
        setresuid(userid, userid, userid);
        i = execv("/bin/sh", args);
    } else {
        fwrite(str, 1, sizeof(str), stderr);
    }
    return 0;
}