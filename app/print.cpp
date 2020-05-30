#include "main.h"

void printf(vector <int>& brics)
{
    int i, j;

    for( j=0;j<10;j++)
    {
    for (  i = 0 ; i < 10 ; i++ )
    {
        printf("%3d", brics.at(j*10+i));
    }
        printf("\n\n");
    }


}


