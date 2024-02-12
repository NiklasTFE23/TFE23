#include <stdio.h>

int main()
{
typedef struct
{
int a,b,c;
double d;
}Struktur;

Struktur  Struktur1;
Struktur1.a = 1;
Struktur1.b = 2;
Struktur1.c = 3;
Struktur1.d = 4.44;
printf ("%i\n",Struktur1.a);
printf ("%i\n",Struktur1.b);
printf ("%i\n",Struktur1.c);
printf ("%.2f\n",Struktur1.d);
}
