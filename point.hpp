#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>

struct point{
    //point struct with x and y coordinates 
    //point should be initialized with a random number from 0 to 100
    int x = std::rand()%101;
    int y = std::rand()%101;
};

#endif