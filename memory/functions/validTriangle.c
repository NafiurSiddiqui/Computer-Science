#include <stdio.h>
#include <stdbool.h>

bool valid_triangle(int a, int b, int c);


void main()
{
    int a, b, c;

    printf("Enter the first value: ");
    scanf("%i", &a);
     printf("Enter the second value: ");
    scanf("%i", &b);
     printf("Enter the third value: ");
    scanf("%i", &c);

    bool result = valid_triangle(a, b, c);

    printf("RESULT: %d\n", result);
    
    result ? printf("A triangle can be formed:\n"): printf("No triangle can be formed.\n");
}


bool valid_triangle(int a, int b, int c)
{
    int result;

    
    //all sides should be positive
    if(a > 0 && b > 0 && c > 0){
        
        //sum of the length of any two sides must be greater than the length of the third side
        if((a + b > c) && (a + c > b) && (b + c > a)){
            result = true;
        }else
        {
            result = false;
        }
        
    }else{
        printf("PROGRAM FAILED: All numbers must be positive! \n");
        
        result = false;

    }
  
    return result;
}
