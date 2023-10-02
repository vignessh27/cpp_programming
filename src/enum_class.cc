/* Program to illustrate difference
 * between enum class and plain enum
*/
#include <iostream>

enum class Tensor : unsigned int
{
    uint8_t = 0,
    int8_t,         // similar to int8_t = 1
    int32_t         // similar to int32_t = 2
};

enum class Array : unsigned int
{
    uint8_t = 0,
    int8_t,         // similar to int8_t = 1
    int32_t         // similar to int32_t = 2
};

enum Tensor_plain_enum : unsigned int
{
    p_uint8_t = 0,  // uint8_t = 0; 
    p_int8_t,       // int8_t,
    p_int32_t       // int32_t
};

enum Colour // by default int
{
    red = 0,
    green,
    blue
};

int main()
{
    Tensor int_tensor = Tensor::int32_t;
    Array  int_array  = Array::int32_t;
    Tensor_plain_enum te = Tensor_plain_enum::p_int32_t;
    Colour colour = Colour::blue;
    if(colour == te)
    {
        std::cout << "Bad comparison" << std::endl;
    }
    
    /* below commented code will error out
    with no operand (==) error
    if(int_tensor == int_array)
    {
    }
    */

    return 0;
}