#include <stdio.h>

int main()
{
    int aaa = 100;
    printf ("%i\n",aaa);
    int *paa = &aaa;
    *paa = 20;
    printf ("%i\n",aaa);
    printf ("%p\n",paa);

    printf ("Size of Char: %lu\n", sizeof(char*));

    return 0;
}