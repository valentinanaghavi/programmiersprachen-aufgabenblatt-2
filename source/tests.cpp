#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "vec2.hpp"
#include "mat2.hpp"

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}


    TEST_CASE("Vec2_constructor", "[Vec2]")
    {
     
      SECTION("default_constructor")
      {
        Vec2 vec1;

        REQUIRE(vec1.x_ == Approx(0.0f));
        REQUIRE(vec1.y_ == Approx(0.0f));
      }

      SECTION("user_constructor")
      {
        Vec2 vec2{0.0f,0.0f};
        Vec2 vec3{-1.0f,500.0f};
        Vec2 vec4{2.9f,3.0f};

        REQUIRE(vec2.x_ == Approx(0.0f));
        REQUIRE(vec2.y_ == Approx(0.0f));
        REQUIRE(vec3.x_ == Approx(-1.0f));
        REQUIRE(vec3.y_ == Approx(500.0f));
        REQUIRE(vec4.x_ == Approx(2.9f));
        REQUIRE(vec4.y_ == Approx(3.0f));
      }
    }

    TEST_CASE("operator_function", "[Vec2]")
    {
      Vec2 vec1{3.0f,5.0f};
      Vec2 vec2{2.1f,3.1f};
      float k = 0.0f;
      float s = 2.0f;
      

      SECTION("+= operator")
      {
        vec1 +=vec2;
        REQUIRE( vec1.x_ == Approx(5.1f));
        REQUIRE( vec1.y_ == Approx(8.1f));
      }

      SECTION("-= operator")
      {
        vec1 -=vec2;
        REQUIRE( vec1.x_ == Approx(0.9f));
        REQUIRE( vec1.y_ == Approx(1.9f));
      }

      SECTION("*= operator")
      {
        vec1 *=s;
        REQUIRE( vec1.x_ == Approx(6.0f));
        REQUIRE( vec1.y_ == Approx(10.0f));
      }

      SECTION("/= operator")
      {
        vec1 /=s;  
        REQUIRE( vec1.x_ == Approx(1.5f));
        REQUIRE( vec1.y_ == Approx(2.5f));

        vec2 /=k;
        REQUIRE( vec2.x_ == Approx(0.0f)); //geteilt durch null
        REQUIRE( vec2.y_ == Approx(0.0f));
      }

    }

      //free functions
     TEST_CASE("operator_free_function", "[Vec2]")
     {
        Vec2 vec1{3.0f,5.0f};
        Vec2 vec2{2.1f,3.1f};
        Vec2 vec3;
        Vec2 vec4;
        float k = 0.0f;
        float s = 2.0f;

        SECTION("+ operator")
        {
          vec3 = vec1 + vec2;
          REQUIRE( vec3.x_ == Approx(5.1f));
          REQUIRE( vec3.y_ == Approx(8.1f));
        }

         SECTION("- operator")
        {
          vec3 = vec1 - vec2;
          REQUIRE( vec3.x_ == Approx(0.9f));
          REQUIRE( vec3.y_ == Approx(1.9f));
        }

         SECTION("* operator")
        {
          vec3 = vec1 * s;
          REQUIRE( vec3.x_ == Approx(6.0f));
          REQUIRE( vec3.y_ == Approx(10.0f));
                    
          vec4 = s * vec1;
          REQUIRE( vec3.x_ == Approx(6.0f));
          REQUIRE( vec3.y_ == Approx(10.0f));

        }

        SECTION("/ operator")
        {
          vec3 = vec1 / s;
          REQUIRE( vec3.x_ == Approx(1.5f));
          REQUIRE( vec3.y_ == Approx(2.5f));
          vec4 = vec1 / k;
          REQUIRE( vec4.x_ == Approx(0.0f)); //geteilt durch null ooooder vec zurueckgeben?
          REQUIRE( vec4.y_ == Approx(0.0f));
        }
     }

      TEST_CASE("Mat2_constructor", "[Mat2]")
    {
     
      SECTION("default_constructor")
      {
        Mat2 mat1;

        REQUIRE(mat1.spalte1.x_ == Approx(1.0f) );
        REQUIRE(mat1.spalte1.y_ == Approx( 0.0f) );
        REQUIRE(mat1.spalte2.x_ == Approx( 0.0f) );
        REQUIRE(mat1.spalte2.y_ == Approx( 1.0f) );
      }

      SECTION("user_constructor")
      {
        Vec2 vec1{0.0f,0.0f};
        Vec2 vec2{-2.0f,-2.0f};
        Vec2 vec3{-1.0f,500.0f};
        Vec2 vec4{2.9f,3.0f};

        Mat2 mat1{vec1,vec2};
        Mat2 mat2{vec3,vec4};

        REQUIRE(mat1.spalte1.x_ == Approx(0.0f));
        REQUIRE(mat1.spalte1.y_ == Approx(0.0f));
        REQUIRE(mat1.spalte2.x_ == Approx(-2.0f));
        REQUIRE(mat1.spalte2.y_ == Approx(-2.0f));

        REQUIRE(mat2.spalte1.x_ == Approx(-1.0f));
        REQUIRE(mat2.spalte1.y_ == Approx(500.0f));
        REQUIRE(mat2.spalte2.x_ == Approx(2.9f));
        REQUIRE(mat2.spalte2.y_ == Approx(3.0f));
      }
    }

    TEST_CASE("operator_function_m", "[Mat2]")
    {
        Vec2 vec1{1.0f,3.0f};
        Vec2 vec2{-2.0f,-2.0f};
        Vec2 vec3{-1.0f,500.0f};
        Vec2 vec4{2.9f,3.0f};

        Mat2 mat1{vec1,vec2};
        Mat2 mat2{vec3,vec4};
        Mat2 mat3;

        SECTION(" *= operator _m")
        {
          mat1 *=mat2;
          REQUIRE(mat1.spalte1.x_ == Approx(-1001.0f));
          REQUIRE(mat1.spalte1.y_ == Approx(-1003.0f));
          REQUIRE(mat1.spalte2.x_ == Approx(-3.1f));
          REQUIRE(mat1.spalte2.y_ == Approx(2.7f));
        }

        SECTION("determinante")
        {
          REQUIRE(mat1.det() == Approx(4.0f));
          REQUIRE(mat2.det() == Approx(-1453.0f)); // det<0 ??
          REQUIRE(mat3.det() == Approx(1.0f)); //det der Einheitsmatrix
        }
    }

          //free functions
     TEST_CASE("operator_free_function_m", "[Mat2]")
     {
        SECTION(" * operator _m")
        {

        }

         SECTION(" inverse_m")
        {
          
        }
        SECTION(" transpose_m")
        {
          
        }

        SECTION("make_rotation_mat2_m")
        {

        } 
     }