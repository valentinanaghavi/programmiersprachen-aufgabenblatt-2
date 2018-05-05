#ifndef MAT2_HPP
#define MAT2_HPP
#include "vec2.hpp"

struct Mat2 
{

    public:
        //TODO Constructors
        Mat2(); //default_constructor
        Mat2( Vec2 const& v , Vec2 const& u); //user_constructor

        Vec2 spalte1;
        Vec2 spalte2;
        
        Mat2& operator *=( Mat2 const& m );
};

Mat2 operator *( Mat2 const& m1 , Mat2 const& m2 );

#endif //MAT2_HPP 