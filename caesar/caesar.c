#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc,  string argv[])
{



   if (argc !=2 )
    {
        printf("Usage: ./ caesar key\n");
        return 1;

    }

    int checkNumbers=strlen(argv[1]);
    for (int i=0; i< checkNumbers; i++)
    {
   if (!isdigit(argv[1][i]))
   {
     printf("Usage: ./ caesar key\n");
    return 1 ;
    }
    }
    int numLetters =atoi(argv[1]);

    string x =get_string("Plaintext:");
    printf("Ciphertext:");
    int charachter =strlen(x);

    for ( int j=0; j<charachter; j++)
    {

      if (!isalpha(x[j]))
      {


      printf(" false carachter");

      }
     if (isalpha(x[j]) && islower(x[j]))
       {
        printf("%c",(((x[j]-97)+numLetters)%26)+97);

          }
          if (isalpha(x[j]) && isupper(x[j]))
       {
        printf("%c",(((x[j]-65)+numLetters)%26)+65);

          }
    }


  printf("\n");
}















