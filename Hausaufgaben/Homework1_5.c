#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long Decimal=0;
    unsigned long long Var = 0;
    int i = 0;
    printf("Gib eine ganze Zahl ein: ");
    scanf("%lld",&Decimal);
    printf("------------------------------\n");

for (i=63;i>=0;i--)
{
   unsigned long long temp = 2^i;
Var=Decimal/temp;
if (Var==1)
{
    printf("1");
    Decimal= Decimal-(2^i);
}
else
{
    printf("0");
}
}

return 0;
}