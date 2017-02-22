#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void) {
    float dollars;
    do{
    printf ("How much change do you need? (Example: 2.25):");
    dollars = GetFloat();
    }
    while (dollars<0);
    int coins = 0;
    int cents=round(dollars*100);
    
    int number = cents/25;
    coins = coins+number;
    cents=cents - number*25;
    
    number = cents/10;
    coins = coins+number;
    cents=cents - number*10;
    
    number = cents/5;
    coins = coins+number;
    cents=cents - number*5;
    
    number = cents/1;
    coins = coins+number;
    cents=cents - number*1;
    
    
  //  printf("%i\n",cents);
    printf ("%i\n", coins);
   
}
