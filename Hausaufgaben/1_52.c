#include <stdio.h>

int main()
{
    int hoehe;
    printf("Gib ne höhe an: ");
    scanf("%i",&hoehe);

    for (int loop = 0;loop<=hoehe;loop++)
    {
        for(int loop2 = 0;loop2<=loop;loop2++)
        {
            printf("*");
        }
        printf("\n\n\n");
    }
    int Temp1=hoehe+1;
    int Temp2=-1;
    for (int Tri=0;Tri<=hoehe;Tri++)
    {
        Temp1 = Temp1-1;
        Temp2 = Temp2+1;
        for(int Tri2=0;Tri2<=Temp1;Tri2++)
        {
            printf(" ");
        }
        for(int Tri3=0;Tri3<=Temp2;Tri3++)
        {
            printf("**");
        }
        for(int Tri4=0;Tri4<=Temp1;Tri4++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}