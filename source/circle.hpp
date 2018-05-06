#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "vec2.hpp"

class Circle
{
    public:
        Circle();
        Circle(float r_ , Vec2 const& mp_);
        float get_r() const;
        Vec2 get_mp() const;


    private:
        float d; //Durchmesser
        float r; //Radius
        Vec2 mp; //Mittelpunkt
};
#endif //CIRCLE_HPP