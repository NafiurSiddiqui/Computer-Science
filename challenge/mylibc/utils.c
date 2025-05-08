#include <stdio.h>
#include "utils.h" // Include the header file where the function is declared

// Function definition
int read_valid_int(const char *prompt)
{
    int num;
    int result;
    int ch;

    while (1)
    {
        printf("%s", prompt);

        result = scanf("%d", &num);

        if (result == 1)
        {
            // Check if anything else is left in the buffer (junk)
            int is_junk = 0;
            while ((ch = getchar()) != '\n' && ch != EOF)
            {
                if (ch != ' ' && ch != '\t')
                {
                    is_junk = 1;
                    printf("Unexpected character: '%c' (ASCII %d)\n", ch, ch);
                }
            }

            if (!is_junk)
            {
                return num; // Clean input
            }
            else
            {
                printf("Please enter only a valid integer without extra characters.\n");
            }
        }
        else
        {
            printf("Invalid input. Please enter a valid integer.\n");

            // Clear input buffer
            while ((ch = getchar()) != '\n' && ch != EOF)
                ;
        }
    }
}
