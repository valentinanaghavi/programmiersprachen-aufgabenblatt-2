#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "vec2.hpp"

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}


    TEST_CASE("Vec2_constructor", "[Vec2]")
    {
     
      SECTION("default_constructor")
      {
        Vec2 vec1;

        REQUIRE(vec1.x_ == 0 );
        REQUIRE(vec1.y_ == 0 );
      }

      SECTION("user_constructor")
      {
        Vec2 vec2{0,0};
        Vec2 vec3{-1,500};
        Vec2 vec4{2.9f,3.0f};

        REQUIRE(vec2.x_ == 0 );
        REQUIRE(vec2.y_ == 0 );
        REQUIRE(vec3.x_ == -1 );
        REQUIRE(vec3.y_ == 500 );
        REQUIRE(vec4.x_ == Approx(2.9f));
        REQUIRE(vec4.y_ == Approx(3.0f));
      }
      

    }

    TEST_CASE("operator_function", "[Vec2]")
    {
      Vec2 vec1{3,5};
      Vec2 vec2{2.1f,3.1f};
      float s = 2;
      

      SECTION("+= operator")
      {
        vec1 +=vec2;
        REQUIRE( vec1.x_ == Approx(5.1));
        REQUIRE( vec1.y_ == Approx(8.1));
      }

      SECTION("-= operator")
      {
        vec1 -=vec2;
        REQUIRE( vec1.x_ == Approx(0.9));
        REQUIRE( vec1.y_ == Approx(1.9));
      }

      SECTION("*= operator")
      {
        vec1 *=s;
        REQUIRE( vec1.x_ == Approx(6));
        REQUIRE( vec1.y_ == Approx(10));
      }

      SECTION("/= operator")
      {
        vec1 /=s; //Division durch null!! 
        REQUIRE( vec1.x_ == Approx(1.5));
        REQUIRE( vec1.y_ == Approx(2.5));
      }

      //free functions test !!
    }