#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%p\n", s);

    int n = 50;
    int *p = &n;
    printf("%i\n", *p);
}

