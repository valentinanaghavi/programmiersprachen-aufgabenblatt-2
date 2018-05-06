#ifndef CIRCLE_CPP
#define CIRCLE_CPP

#include"circle.hpp"
#include"vec2.hpp"
#include"color.hpp"
#include<cmath>

Circle :: Circle() :

    r{0.0f},
    mp{0.0f,0.0f},
    color_{0.0f}
    {};

 Circle :: Circle(float r_ , Vec2 const& mp_, Color const& color) :
    r{r_},
    mp{mp_},
    color_{color}
    {};



float Circle :: get_r() const
{
    return r;

}

Vec2 Circle :: get_mp() const//mit oder ohne &???
{
    return mp;

}

float Circle :: circumference () const
{
    return (2*M_PI*r);
}


#endif 