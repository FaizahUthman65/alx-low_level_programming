#include <stdio.h>
/**
* main - Prints all alphabets in lowercase except q and e.
*
* Return: Always 0.
*/
int main(void)
{
    char alphabet;

    for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
    {
        if (alphabet != 'e' && alphabet != 'q')
               putchar(alphabet);
    }
    putchar('\n');

    return (0);
}
