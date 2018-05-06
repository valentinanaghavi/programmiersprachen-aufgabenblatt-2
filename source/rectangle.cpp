#ifndef RECTANGLE_CPP
#define RECTANGLE_CPP

#include"rectangle.hpp"
#include"color.hpp"
#include<cmath>


Rectangle :: Rectangle() :
    min_{0.0f,0.0f},
    max_{0.0f,0.0f},
    color_{0.0f}
    {};

Rectangle :: Rectangle(Vec2 const& min, Vec2 const& max, Color const& color) :
    min_{min},
    max_{max},
    color_{color}
    {};

float Rectangle :: get_breite() const
{
    return (max_.x_ - min_.x_);
}
float Rectangle ::  get_hoehe() const
{
    return(max_.y_ - min_.y_);
}
Vec2 Rectangle ::  get_min_() const
{
    return min_;
}
Vec2 Rectangle ::  get_max_() const
{
    return max_;
}

float Rectangle :: circumference() const
{
    return (2*(get_breite()+get_hoehe()));
}

#endif // RECTANGLE_CPP 