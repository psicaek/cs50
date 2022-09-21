#include "helpers.h"
#include <math.h>
// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{

    for (int i=0; i<height; i++)
    {
        for(int x=0; x<width; x++)
        {
           int average = round((image[i][x].rgbtBlue+image[i][x].rgbtGreen+image[i][x].rgbtRed)/3.0);
             image[i][x].rgbtBlue=average;
             image[i][x].rgbtGreen=average;
             image[i][x].rgbtRed=average;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{

    for (int i=0; i<height; i++)
    {
        for(int x=0; x<width; x++)
        {
            int r= image[i][x].rgbtRed;
            int b= image[i][x].rgbtBlue;
            int g= image[i][x].rgbtGreen;
            int  sepia_red=round(0.393*r+0.769*g+0.189*b);

           if(sepia_red>255 )
           {
            image[i][x].rgbtRed=255;
           }
                else
                 {
                    image[i][x].rgbtRed=sepia_red;
                 }
                        int  sepia_green=round(0.349*r+0.686*g+0.168*b);
                         if( sepia_green>255)
                         {
                         image[i][x].rgbtGreen=255;
                         }
                         else
                         {
                        image[i][x].rgbtGreen=sepia_green;
                         }
                                    int  sepia_blue=round(0.272*r+0.534*g+0.131*b);
                                   if (sepia_blue>255)
                                     {
                                     image[i][x].rgbtBlue=255;
                                     }
                                     else
                                     {
                                     image[i][x].rgbtBlue=sepia_blue;
                                     }
            }

         }



    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{

        for (int i=0; i<height; i++)
        {
            for (int x=0; x<(width/2); x++)
            {
           int tempred = image[i][x].rgbtRed;
            int    tempblue = image[i][x].rgbtBlue;
            int    tempgreen = image[i][x].rgbtGreen;

            image[i][x].rgbtRed=image[i][width - 0 -1].rgbtRed;
            image[i][x].rgbtBlue=image[i][width - x -1].rgbtBlue;
            image[i][x].rgbtGreen=image[i][width - x -1].rgbtGreen;

                    image[i][width - x -1].rgbtRed=tempred;
                    image[i][width - x -1].rgbtBlue=tempblue;
                    image[i][width - x -1].rgbtGreen=tempgreen;
            }
        }

    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
