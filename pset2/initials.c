#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) {
 //   printf("Put your full name:");
    string s = GetString();
 /*   printf("%c", s[0]);
 for (int i=0, n = strlen(s); i<n; i++){
        if (s[i]==32){
            if(s[i+1]>96){
            printf("%c", (s[i+1]-32));
            }
            else{
                printf("%c", s[i+1]);
            }
        }
   }*/
   
    int triger = 1;
    for (int i=0, n = strlen(s); i<n; i++){
        if (triger==1){
           if(s[i]>96){
            printf("%c", s[i]-32);
                }
            else{
                printf("%c", s[i]);
                }
            triger=0;
        }
        if (s[i]==32){
            triger=1;
        }
    }
    printf ("\n");
}