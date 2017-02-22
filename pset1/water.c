#include <stdio.h>
#include <cs50.h>

int main(void) {
    printf ("how many minutes do you take a shower:");
    int minutes = GetInt();
    minutes= minutes*12;
    printf ("you lost: %i bottles\n", minutes);
}