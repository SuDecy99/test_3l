#include <gtest/gtest.h>
#include <vector>

#include "main.h"

TEST(function_zero, zeroing1) {
    vector <int> b(100);
    int i;

    function_zero(b);

    for(i=0;i<100;i++)
    EXPECT_EQ(b.at(1), 0);
}


TEST(function_zero, zeroing2) {
    vector <int> b(100);
    int i;
    for(i=0;i<100;i++)
        b.at(i)=rand()%100;

    function_zero(b);

    for(i=0;i<100;i++)
    EXPECT_EQ(b.at(1), 0);
}

TEST(function_bomb, boo) {
    vector <int> b(100);
    int i,k=0;

    function_bomb(b);

    for(i=0;i<100;i++)
        if(b.at(i)==10) k++;

    for(i=0;i<100;i++)
    EXPECT_EQ(k, 10);
}


TEST(function_check, line_bomb) {
    vector <int> b(100);
    int i;

    for(i=0;i<10;i++)
        b.at(i)=10;

    check(b);

    for(i=10;i<20;i++)
    {
        if(i==10 || i==19) {EXPECT_EQ(b.at(i), 2);}
        if(i>10 && i<19) {EXPECT_EQ(b.at(i), 3);}
    }
}


