#include <stdio.h>

int main()
{
    int Decimal=0;
    printf("Gib eine ganze Zahl ein: ");
    scanf("%d",&Decimal);
    printf("------------------------------\n");
    do{
        int Rest=Decimal % 2;
        Decimal = Decimal/2;
        if (Rest=1) 
        {
            printf("1");
        }
        else 
        {
            printf ("0");
        }
    }while(Decimal>=1);
    printf("\n");
return 0;
}