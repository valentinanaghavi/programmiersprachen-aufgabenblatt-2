#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "vec2.hpp"
#include"color.hpp"
#include"window.hpp"

class Circle
{
    public:
        Circle();
        Circle(float r_ , Vec2 const& mp_, Color const& color);
        float get_r() const;
        Vec2 get_mp() const;
        float circumference () const;
        void draw (Window const& w) const;
        

    private:
        float r; //Radius
        Vec2 mp; //Mittelpunkt
        Color color_;
};
#endif //CIRCLE_HPP