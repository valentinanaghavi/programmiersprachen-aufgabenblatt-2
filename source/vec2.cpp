#ifndef VEC2_CPP
#define VEC2_CPP

#include "vec2.hpp"


Vec2 :: Vec2 ()
{
x_ = 0;
y_ = 0;
}

Vec2 :: Vec2 (float x, float y)
{
x_ = x;
y_ = y;
}

Vec2& Vec2 :: operator +=( Vec2 const & v )

{
  x_ += v.x_;
  y_ += v.y_;
  return *this;
}
Vec2& Vec2 :: operator -=( Vec2 const & v )
{
  x_ -= v.x_;
  y_ -= v.y_;
  return *this;
}
Vec2& Vec2 :: operator *=( float s )
{
  x_ *= s;
  y_ *= s;
  return *this;
}
Vec2& Vec2 :: operator /=( float s )
{
  x_ /= s;
  y_ /= s;
  return *this;
}


 #endif // VEC2_CPP 