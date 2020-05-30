#include <iostream>
#include <vector>

#include "main.h"


int main()
{
    vector <int> brics(100);
    function_zero(brics);
    function_bomb(brics);
    check(brics);


    printf(brics);
}
