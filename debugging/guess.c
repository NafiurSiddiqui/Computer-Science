#include <stdio.h>


int main(void)
{
    int secret = 5;
    int guess;
    printf("Guess the number: \n");
    scanf("%i", &guess);

    while(guess != secret)
    {
     printf("Wrong guess!\n");   
    }

    printf("You are correct!\n");


}