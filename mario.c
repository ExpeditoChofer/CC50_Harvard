#include <cs50.h>
#include <stdio.h>
//Hashtag pyramid
int main(void)
{
    int height;
    do
    {
        height = get_int("height: ");
    }
    while (height < 1 || height > 8);
    for(int row=0; row<height; row++)
    {
        for (int column=0; column<height; column++)
        {
            if (row+column< height-1)
            printf(" ");
            else
            printf("#");
        }
        printf("\n");
    }
}
