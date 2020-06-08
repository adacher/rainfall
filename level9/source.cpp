#include <cstring.h>
#include <cstdlib.h>

using namespace std;

class N
{
public:
    int tmp;
    char buffer[100];
    N(){};

    N(int n)
    {
        tmp = n;
    }

    virtual int operator+(N &n)
    {
        return (tmp + n.tmp);
    }

    virtual int operator-(N &n)
    {
        return (tmp - n.var1);
    }

    void setAnnotation(char *s)
    {
        memcpy(buff, s, strlen(s));
    }
};

int main(int ac, char **av)
{
    if (ac == 1)
        exit(1);
    N *a = new N(5);
    N *b = new N(6);
    a->setAnnotation(av[1]);
    *a = *a + *b;
}