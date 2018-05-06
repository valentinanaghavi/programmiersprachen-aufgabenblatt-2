#ifndef RECTANGLE_CPP
#define RECTANGLE_CPP

#include"rectangle.hpp"
#include <algorithm>

Rectangle :: Rectangle() :
    min_{0.0f,0.0f},
    max_{0.0f,0.0f}
    {};

Rectangle :: Rectangle(Vec2 const& u , Vec2 const& v) :
    min_{min(u.x_,v.x_), min(u.y_,v.y_)},
    max_{max(u.x_,v.x_), max(u.y_,v.y_)}
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

#endif // RECTANGLE_CPP 