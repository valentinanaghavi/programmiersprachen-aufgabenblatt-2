#ifndef RECTANGLE_CPP
#define RECTANGLE_CPP

#include"rectangle.hpp"
#include"color.hpp"
#include"window.hpp"
#include "vec2.hpp"
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

void Rectangle :: draw(Window const& w) const
{
    w.draw_line(min_.x_, min_.y_,min_.x_,max_.y_, color_.r_, color_.g_ ,color_.b_);
    w.draw_line(min_.x_,max_.y_,max_.x_,max_.y_, color_.r_, color_.g_ , color_.b_);
    w.draw_line(max_.x_,max_.y_,max_.x_,min_.y_, color_.r_, color_.g_ , color_.b_);
    w.draw_line(max_.x_,min_.y_,min_.x_,min_.y_, color_.r_, color_.g_ , color_.b_);
}


#endif // RECTANGLE_CPP 