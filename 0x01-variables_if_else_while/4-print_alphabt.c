#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the alphabet in lowercase excluding 'q' and 'e' using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        if (letter != 'q' && letter != 'e')
            putchar(letter);
    }

    putchar('\n');

    return 0;
}

