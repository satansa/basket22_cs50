#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h> 
#include <ctype.h>

int main(int argc, string argv[])
{
    int error=0;
    if (argc!=2)
    {
    error=1;
    }
    else
    {
    for(int i=0, n=strlen(argv[1]); i<n; i++)
        {
            if (isalpha(argv[1][i]))
            {
                if(isupper(argv[1][i]))
                {
                    argv[1][i]=argv[1][i]+32;
                }
            }
            else
            {
                error=1;
            }
            
        }
    }
    if (error==1)
    {
        printf("Error!\n");
        return 1;
    }
    else
    {               
        int counter = -1;
        int klen = strlen(argv[1]);
        //printf("%s\n",argv[1]);
        string original = GetString();
        //printf("%s\n", original);
        int kuku=1;
        int keys[klen];
        for(int i=0, n=klen;i<n;i++)
                {
                    keys[i]=(argv[1][i])-97;
                 //   printf("*%i*",keys[i]);
                }
                
                
        for (int i=0, n=strlen(original); i<n; i++)
        {
                    int ori=original[i];
            if(isalpha(original[i]))
            {
                //printf ("%i#",original[i]);
                counter++;
                if (isupper(original[i]))
                {
                    ori=ori+keys[counter%klen];
                    if (ori>90)
                    {
                        ori=ori-26;
                    }
                }
                if (islower(original[i]))
                {
                    //printf ("%i#",original[i]);
                    ori=original[i];
                    int keli=keys[(counter%klen)];
                    /*printf ("%i#ori",ori);
                    printf ("%i#keli",keli);*/
                    original[i]=ori+keys[(counter%klen)];
                    ori=ori+keli;
                   /* printf ("%i#oti2",ori);
                    printf ("%i#",counter);
                    printf ("%i#",klen);
                    printf ("%i#",keys[(counter%klen)]);
                    printf ("%i#",(counter%klen));
                    printf ("%i#",original[i]);*/
                    if (ori>122)
                    {
                        
                        ori=ori-26;
                    }
                   // printf ("%i#",original[i]);
                }
            }
            printf ("%c",(char)ori);
           // printf ("*%i*", counter%klen);
            kuku++;
        }
      
    }         
     printf ("\n");                           
}

