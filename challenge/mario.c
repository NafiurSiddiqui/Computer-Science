#include <stdio.h>
#include "mylibc/utils.h"
int main(void)
{
    int height = 0;

    // printf("Enter the height: ");
    // int user_input = scanf("%d", &height);

    int x = read_valid_int("Enter a valid positive number: ");

    printf("you have entered: %d\n", x);

    return 0;
}