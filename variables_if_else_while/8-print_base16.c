#include <stdio.h>

/**
* main(void) (- Generates hexa)
* return (0); (- Confirm if sucess)
*
* Write hexadecimal Numbers
*/

int main(void) {
    char base16[] = "0123456789abcdef";
    for (int i = 0; i < 16; i++) {
        putchar(base16[i]);
        putchar(' ');
    }
    putchar('\n');
    return 0;
}
