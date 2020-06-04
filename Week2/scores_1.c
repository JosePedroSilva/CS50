#include <stdio.h>

const int N = 3;

int main(void)
{
    int scores[N];
    scores[0] = 72;
    scores[1] = 74;
    scores[2] = 33;

    printf ("Avg: %i\n", (scores[0] + scores[1] + scores[2]) / 3);
}