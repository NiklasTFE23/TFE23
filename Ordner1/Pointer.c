#include <stdio.h>

int main()
{
    int a = 100;
    printf ("%i\n",a);
    int *pa = &a;
    *pa = 20;
    printf ("%i\n",a);
    printf ("%p\n",pa);

    printf ("Size of Char: %u\n", sizeof(char*));

    return 0;
}