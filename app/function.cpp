#include "main.h"

int i,j,k;

void function_zero(vector <int>& brik)
{

    for(i=0;i<100;i++)
        {
             brik.at(i)= 0;
        }

}

void function_bomb(vector <int>& brik)
{


    for(i=0;i<100;i++)
        if ( brik.at(i) != 0 ) function_zero(brik);
    i=0;
    while(i<10)
    {
        j = rand() % 100;
        if(brik.at(j) == 0)
        {
        brik.at(j) = 10;
        i++;
        }
    }


}

void check(vector <int>& brics)
{
    int k=0;
    for(i=0;i<100;i++)
        if ( brics.at(i) != 0 ) k++;
        if(k!=10)
            {
            function_zero(brics);
            function_bomb(brics);
            }

    for ( k = 0; k<100; k++ )
    if(brics.at(k)!= 10)
    {
    if( ( k % 10 ) != 0 )
    {
        if(brics.at(k-1)==10) brics.at(k)++;
    }
    if( ( k % 10 ) != 9 )
    {
        if(brics.at(k+1)==10) brics.at(k)++;
    }

    if(k>9)
    {
        if(brics.at(k-10)==10) brics.at(k)++;
    }

    if(k<90)
    {
        if(brics.at(k+10)==10) brics.at(k)++;
    }

    if((k<90) && (k % 10 != 0 ))
    {
        if(brics.at(k+9)==10) brics.at(k)++;
    }
    if((k<90) && (k % 10 != 9))
    {
        if(brics.at(k+11)==10) brics.at(k)++;
    }
    if((k>9) && (k % 10 != 9))
    {
        if(brics.at(k-9)==10) brics.at(k)++;
    }
    if((k>9) && (k % 10 != 0))
    {
        if(brics.at(k-11)==10) brics.at(k)++;
    }
    }

}
