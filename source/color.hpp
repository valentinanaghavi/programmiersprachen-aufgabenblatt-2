#ifndef COLOR_HPP
#define COLOR_HPP

#include <iostream>

struct COLOR_HPP
{
    Color()
    {
        r_ = 0.0f;
        g_ = 0.0f;
        b_ = 0.0f;
    }
    Color(float r, float g, float b)
    {
        if((r != 0.0f && r != 1.0f) || (g != 0.0f && g != 1.0f) || (b != 0.0f && b != 1.0f))
        {
            std::cout <<"ungueltige eingabe."<<std::endl;
            r_ = 0.0f;
            g_ = 0.0f;
            b_ = 0.0f;
        }
        else
        {
            r_ = r;
            g_ = g;
            b_ = b;
        }
    }

    Color(float r)
    {
        if(r == 0.0f)
        {
            r_ = 0.0f;
            g_ = 0.0f;
            b_ = 0.0f;
        }

        else
        {
            r_ = 1.0f;
            g_ = 1.0f;
            b_ = 1.0f;
        }
    }

    float r_;
    float g_;
    float b_;

};

#endif // COLOR_HPP