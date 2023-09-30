/*
LAB 1 ASSIGNMENT - GUESSINT
Student ID: 2300411
Name: Augustine Chan Yi Ren
*/
#include <stdio.h>
// define what macros are needed, keep it simple.
#define max_guesses 10
// #define max_num 1000
// #define min_num 1

int main()
{
    int player1_guess;
    int player2_guess;

    // printf("Player 1, enter a number between %d to %d:", min_num, max_num);
    printf("Player 1, enter a number between 1 and 1000:\n");
    do
    {
        scanf("%d", &player1_guess); // store input to player1_guess, must include '&'
        // if (player1_guess < min_num || player1_guess > max_num)
        if (player1_guess < 1 || player1_guess > 1000) // using || means AND for conditions.
        {
            printf("That number is out of range.\n");
            // printf("Player 1, enter a number between %d and %d:", min_num, max_num);
            printf("Player 1, enter a number between 1 and 1000:\n");
        }
    } // while (player1_guess < min_num || player1_guess > max_num);
    while (player1_guess < 1 || player1_guess > 1000);

    // printf("%d\n", player1_guess); // print input.
    // once the number is valid, need to introduce player 2 into the game.

    int count = 0;              // set this to 0 first.
    while (count < max_guesses) // primary condition in the game?, 10 guesses allowed.
    {
        printf("Player 2, you have %d guesses remaining.\n", max_guesses - count);
        printf("Enter your guess:\n");
        scanf("%d", &player2_guess);
        // if (player2_guess < min_num || player2_guess > max_num)

        if (player2_guess < 1 || player2_guess > 1000)
        {
            count--;
            // printf("%d\n", player2_guess);
            printf("That number is out of range.\n");
        }
        else if (player2_guess < player1_guess)
        {
            //  printf("%d\n", player2_guess);
            printf("Too low.\n");
        }
        else if (player2_guess > player1_guess)
        {
            //   printf("%d\n", player2_guess);
            printf("Too high.\n");
        }
        else
        {
            // printf("%d\n", player2_guess);
            printf("Player 2 wins.\n");
            break; // stop the loop
        }
        count++; // this will give a +1 count for every attempt , use max_guesses against this to get the remainder.
    }
    if (count == max_guesses) // if count equals to 10 = player 1 will win.
    {
        printf("Player 1 wins.\n");
    }
    return 0;
}