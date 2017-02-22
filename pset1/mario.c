#include <stdio.h>
#include <cs50.h>
#include <time.h>

int main(void) {
     clock_t t;

  t = clock();

    int number;
    
    do {
    printf ("Put a number from 0 to 23:");
    number = GetInt();
    } 
    while ((number<0) || (number>23));
    
    for (int i=1, j = 1; j<number; i++)
    {
        
        if ((i+j)>(number-1))
        {
        //printf ("%i-%i ",i,j);
        printf ("#");
        }
        else 
        {
            printf (" ");
            //printf ("@%i-%i@ ",i,j);
        }
        if (i>=number)
         {
            j++;
            i=0;
            printf ("\n");
        }
       
    }

    t = clock() - t;

  printf ("It took me %d clicks (%f seconds).\n",
          (int)t, ((double)t)/CLOCKS_PER_SEC);
  return 0;
}