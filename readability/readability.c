#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(string text);
int count_words(string words);
int count_sentences(string sentences);
int main(void)
{
   string text=get_string("text:");
   int letters=count_letters(text);
   int words =count_words(text);
   int sentence=count_sentences(text);

   //printf("%i\n%i\n%i\n",letters,words,sentence);
 float  calc = (0.0588 * letters / words*100) - (0.296 * sentence / words * 100) - 15.8;
 int grade=round(calc);
 if(grade<=1)
 {
   printf("Before Grade 1\n");
   return 0;
 }
   if (grade>16)
{
   printf("Grade 16+\n");
   return 0;
}
   printf("Grade %i",grade);

   printf("\n");
}
int count_letters(string text)
{
         int letters=0;
         int i =0;
         int countText =strlen(text);
         for( i=0; i<countText; i++)
         {
            if (isalpha(text[i]))
             {
               letters++;
             }
          }
            return letters ;
}
int count_words(string words)
{

         int words1=0;
         int i=0;
         int countSpace =strlen(words);
         for(i=0; i<countSpace; i++)
         {
            if (isspace(words[i]))
            {
               words1++;
            }
         }
         return words1+1;
}

int count_sentences(string sentences)
{

   int sentence=0;
         int i=0;
         int countSpace =strlen(sentences);
         for(i=0; i<countSpace; i++)
         {
           if ((sentences[i])=='.'||(sentences[i])=='!' ||(sentences[i])=='?' )
            {
               sentence++;
            }
         }
         return sentence;
}



