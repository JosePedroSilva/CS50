#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string names[3];
    names[0] = "EMMA";
    names[1] = "Joe";
    names[2] = "David";

    printf("%s\n", names[0]);
    printf("%c%c%c%i\n", names[1][0], names[1][1], names[1][2], names[1][3]);
}