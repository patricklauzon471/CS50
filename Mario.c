#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h = 0;

    do
    {
        h = get_int("Height: ");
    }

    while (h < 1 || h > 8);

    for (int i = 0; i < h; i++)
    {

        for (int j = 1; j < h - i; j++)
        {

            printf(" ");
        }
        for (int x = -1; x < i; x++)
        {

            printf("#");
        }

        printf("  ");
        for (int y = -1; y < i; y++)
        {

            printf("#");
        }

        printf("\n");
    }
}
