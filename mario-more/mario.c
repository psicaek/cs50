#include <cs50.h>
#include <stdio.h>

        int main(void)
{

    int x; // input
    int y; // lines
    int i; // hashes
    int dot;//keno prwto
    int a; //keno deytero

    do
    {
         x = get_int ("whats the number?:");
    }
         while (x < 1 || x > 8);

         for (y=0; y<x; y++)// grammh katheth
{
     for (dot=x; dot>i+1; dot--)  // for dot = input x and dot > i+1 print space--
{
    printf(" ");
}

         for (i=0; i<=y; i++) // hashes
        {
        printf("#");


        }
        printf("  ");
         for(a=0; a<=y; a++)
   {
 printf("#");
    }
        printf ("\n"); // epomenh grammh
        }




}