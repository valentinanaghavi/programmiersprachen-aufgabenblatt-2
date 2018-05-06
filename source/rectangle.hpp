#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "vec2.hpp"
class Rectangle
{
    public:
    Rectangle();
    Rectangle(Vec2 const& u , Vec2 const& v);

    float get_breite() const;
    float get_hoehe() const;
    Vec2 get_min_() const;
    Vec2 get_max_() const;

    private:
    Vec2 min_;
    Vec2 max_;
    float breite;
    float hoehe;
};
#endif // RECTANGLE_HPP 