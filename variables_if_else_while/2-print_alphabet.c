#include <stdio.h>

/**
* main(void) (- Generates alphabet)
* return (0); (- Confirm if sucess)
*
* Write a program that prints the alphabet in lowercase, followed by a new line.
*/

int main()
{
    char c;
    for (c = 'a'; c <= 'z'; c++)
    {
        putchar(c);
    }
    putchar('\n');
    return (0);
}
