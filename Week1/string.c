#include <cs50.h>
#include <stdio.h>

int main(void){
    string answer = get_string("Your name is?\n");
    printf("Hello!, %s!!\n", answer);
}