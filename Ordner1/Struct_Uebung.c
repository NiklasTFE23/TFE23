#include <stdio.h>

int main()
{
    struct Test
    {
        int Var1,Var2,Var3;
        double Var4;
    }Probe1;
    struct Test Probe2 = {.Var1 =1, .Var2=2, .Var3=3, .Var4=4.44};
    printf ("%i\n", Probe2.Var1);
    printf ("%i\n", Probe2.Var2);
    printf ("%i\n", Probe2.Var3);
    printf ("%.2f\n", Probe2.Var4);
}