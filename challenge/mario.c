#include <stdio.h>
#include "mylibc/utils.h"
int main(void)
{

    int HEIGHT = 4;

    // How to put that space?
    // how to add hash gradually?

    // Algorithm

    for (int i = 0; i < HEIGHT; i++)
    {

        //  Right aligned pyramid
        for (int j = 0; j < ((HEIGHT - i) - 1); j++)
        {
            // printf("loop: %d, ", j);
            // printf("%i -> %i\n", (HEIGHT - i), ((HEIGHT - i) - 1));

            // printf("space");
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        // left aligned pyramid
        printf(" ");

        for (int x = 0; x <= i; x++)
        {
            /* code */
            printf("#");
        }

        printf("\n");
    }

    return 0;
}