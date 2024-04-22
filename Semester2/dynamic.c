#include <stdio.h>
#include <stdlib.h>

void main()
{
    int value;
    scanf("%i",&value);

    int* ptr=(int*)calloc(value,sizeof(int));

    for(int i=0;i<value;i++)
    {
        ptr[i]=i+1;
    }
    for(int k=0;k<value;k++)
    {
        printf("%i\n",ptr[k]);

    }
    free(ptr);
}
