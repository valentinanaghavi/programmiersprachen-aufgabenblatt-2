#ifndef CIRCLE_CPP
#define CIRCLE_CPP

#include"circle.hpp"
#include"vec2.hpp"
#include<cmath>

Circle :: Circle() :

    r{0.0f},
    mp{0.0f,0.0f}
    {};

 Circle :: Circle(float r_ , Vec2 const& mp_) :
    r{r_},
    mp{mp_}
    {};



float Circle :: get_r() const
{
    return r;

}

Vec2 Circle :: get_mp() const//mit oder ohne &???
{
    return mp;

}


#endif 