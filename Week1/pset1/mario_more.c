#include <stdio.h>
#include <cs50.h>

void hashes(int number);
void spaces(int number);

int main(void)
{
    int n, hcounter, space_counter;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    hcounter = 1;
    space_counter = n - 1;

    // Creates the lines
    for (int i = 0; i < n; i++)
    {
        spaces(space_counter);
        hashes(hcounter);
        printf("  ");
        hashes(hcounter);
        printf("\n");

        // Add to the # counter and reduces the number of spaces
        hcounter++;
        space_counter--;
    }
}

// Populates the lines with the # symbol
void hashes(int number)
{
    for (int i = 0; i < number; i++)
    {
        printf("#");
    }
}

// Populates the lines with the spaces
void spaces(int number)
{
    for (int i = 0; i < number; i++)
    {
        printf(" ");
    }
}