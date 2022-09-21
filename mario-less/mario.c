#include <cs50.h>
#include <stdio.h>

int main(void)
{
 int x;

 int i;

 int j;
 int dot;
    do
    {
        x = get_int("whats the height:");

    }
         while ( x < 1 || x > 8 );    // input with boarders

        for ( i=0;  i<x; i++)   // for i =0 and i <x make a new line++
{

    for (dot=x; dot>i+1; dot--)  // for dot = input x and dot > i+1 print space--
{
   printf(" ");
}

         for (j=0; j<=i; j++ ) // for j =0 and j < line print hashes++
{
     printf("#");

}
    printf("\n");
}
}