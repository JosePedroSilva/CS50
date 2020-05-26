#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float price = get_float("What's the price?\n");
    printf("The total is %.2f.\n", price * 1.23);
}
