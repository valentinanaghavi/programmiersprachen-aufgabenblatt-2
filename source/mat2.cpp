#ifndef MAT2_CPP
#define MAT2_CPP

#include "mat2.hpp"
#include "vec2.hpp"

//default_constructor
Mat2 :: Mat2() :

    spalte1{1.0f,0.0f},
    spalte2{0.0f,1.0f}
{};

//user_constructor
Mat2 :: Mat2( Vec2 const& v , Vec2 const& u) :

     spalte1{v.x_ , v.y_},
     spalte2{u.x_ , u.y_}
{}; 

 Mat2& Mat2 :: operator *=( Mat2 const& m )
 {
     Mat2 multi;
     multi.spalte1.x_ = (spalte1.x_ * m.spalte1.x_)+(spalte2.x_ * m.spalte1.y_);
     multi.spalte1.y_ = (spalte1.y_ * m.spalte1.x_)+(spalte2.y_ * m.spalte1.y_);
     multi.spalte2.x_ = (spalte1.x_ * m.spalte2.x_)+(spalte2.x_ * m.spalte2.y_);
     multi.spalte2.y_ = (spalte1.y_ * m.spalte2.x_)+(spalte2.y_ * m.spalte2.y_);

     spalte1 = multi.spalte1;
     spalte2 = multi.spalte2;
     return *this; 
 }

 Mat2 operator *( Mat2 const& m1 , Mat2 const& m2 )
 {
     Mat2 multi;

     multi.spalte1.x_ = (m1.spalte1.x_ *m2.spalte1.x_)+(m1.spalte2.x_ * m2.spalte1.y_);
     multi.spalte1.y_ = (m1.spalte1.y_ * m2.spalte1.x_) + (m1.spalte2.y_ * m2.spalte1.y_);
     multi.spalte2.x_ = (m1.spalte1.x_ * m2.spalte2.x_)+(m1.spalte2.x_ * m2.spalte2.y_);
     multi.spalte2.y_ = (m1.spalte1.y_ * m2.spalte2.x_)+(m1.spalte2.y_ * m2.spalte2.y_);

     return multi;
 }

 #endif // MAT2_CPP 