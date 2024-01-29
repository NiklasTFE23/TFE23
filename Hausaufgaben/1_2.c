#include <stdio.h>

int main()
{
    int A = 1, B = 2, C = 3, D = 4;
    int E = A;

    float Durchs = (float) (A+B+C+D+E)/5;
    printf ("Der Durschnitt beträgt: %.1f\n",Durchs);

    int E1 =90;
    int E2 =11;
    float Prozent = (float) E1*((float)E2/100);
    printf ("Der Anteil beträgt %.1f",Prozent);

    return 0;
}
