#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "vec2.hpp"
#include"color.hpp"
class Rectangle
{
    public:
    Rectangle();
    Rectangle(Vec2 const& min , Vec2 const& max, Color const& color);

    float get_breite() const;
    float get_hoehe() const;
    Vec2 get_min_() const;
    Vec2 get_max_() const;

    float circumference () const;

    private:
    Vec2 min_;
    Vec2 max_;
    Color color_;
};
#endif // RECTANGLE_HPP 