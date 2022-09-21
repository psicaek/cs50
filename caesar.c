#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
// Make sure program was run with just one command-line argument
    if (argc!=2)
    {
         printf("Usage: ./caesar key\n");
        return 1;
    }
    // Make sure every character in argv[1] is a digit

         int second=strlen(argv[1]);
        for (int i=0; i<second; i++)
     {

         if (!isdigit(argv[1][i]) )
        {
         printf("Usage: ./caesar key\n");
         return 1;
         }
    }
    // Convert argv[1] from a `string` to an `int`
        int key =atoi(argv[1]);
        // Prompt user for plaintext
        string plaintext = get_string("plaintext:");

        printf("chipertext:");

    // For each character in the plaintext:
    int charachter = strlen(plaintext);
    for (int n=0; n<charachter; n++)
    {
        if (!isalpha(plaintext[n]))
        {
            printf("falsh plaintext");
        }

         // Rotate the character if it's a letter
        if (isalpha(plaintext[n]) && isupper(plaintext[n]))
        {
            printf("%c",(((plaintext[n]+key)-65)%26)+65);

        }
        if  (isalpha(plaintext[n]) && islower(plaintext[n]))
        {
            printf("%c",(((plaintext[n]+key)-97)%26)+97);

        }

         }
    printf("\n");

}