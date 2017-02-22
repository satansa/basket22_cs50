#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h> 

int main(int argc, string argv[]){
    if (argc!=2){
        printf("Error!\n");
        return 1;
    }
    else{
    int k = atoi(argv[1]);
    if (k>26){
        int z = k/26;
        k=k-z*26;
    }
    string phrase = GetString();
//printf("%i\n",k);
//printf("%s\n",phrase);
  for (int i = 0, n = strlen(phrase); i < n; i++)
{
    int c = phrase[i]+k;
    if (phrase[i]>64 && phrase[i]<91){
        if(c>90){
            c=c-26;
        }
    }
    else if (phrase[i]>96 && phrase[i]<123){
        if(c>122){
            c=c-26;
        }
    }
    else {
        c=phrase[i];
    }
    printf("%c",(char)c );
    
}
printf("\n");
}
}