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
        //printf("%s\n",argv[1]);
        string original = GetString();
        //printf("%s\n", original);
        
        int keys[strlen(argv[1])];
        int i;
        int n;
        int c = 0;
        
            for (int j=0, m=strlen(original); j<m; j++)
            {
                for(i=0, n=strlen(argv[1]);i<n;i++)
                {
                    keys[i]=(argv[1][i])-97;
                    //printf("*%i*",keys[i]);
                }
                
                if (!isalpha(original[j]))
                {
                    c++;
                   // printf("%i",c);
                }
                
                if (isalpha(original[j]))
                {
                    i=(j-c)%n;
                    int result = (original[j]+keys[i]);
                    if (isupper(original[j]))
                    {
                        if (result>90)
                        {
                        result=result-26;
                        }
                    }
                    else if(islower(original[j]))
                    {
                        if (result>122)
                        {
                        result=result-26;
                        }
                    }

                    printf ("%c",(char)result);
                }
                else
                {
                    printf("%c",original[j]);
                }
                
            }        
    }   
    printf("\n");
}