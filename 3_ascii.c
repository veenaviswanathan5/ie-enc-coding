#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character:\n ");
    scanf("%c", &c);

    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of the character %c = %d", c, c);

    return 0;
}
