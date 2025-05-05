#include <stdio.h>

// Function Prototypes/declarations
//without the following delcarations,the compiler will throw an error since it has no idea where the following functions are coming from inside the main.

int increment(int x); 
float multiply_two_numbers(float x, float y);
void prints_a_static_line(void);


// Main Function
int main(void)
{
    int x = 2;
    int y;
    float z = 20.05;
    y = increment(x);
    z = multiply_two_numbers(x, z);

    printf("x is %i and y is %i\n", x, y);
    printf("The result of multiplications is:%f\n", z );
    prints_a_static_line();
}

// Function Definitions
int increment(int x)
{
    x++;
    return x;
}

float multiply_two_numbers(float x, float y)
{
    float result = x * y;

    return result;
}

//Function Miscellany
//when return type is nothing, takes no input

void prints_a_static_line(void)
{
    printf("\nThe purpose of this function, is to teach you function miscellany!\n");
}