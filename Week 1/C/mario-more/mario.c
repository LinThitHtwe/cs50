#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 9);

    int row = 1;

    do
    {
        for (int space = 0; space < height - row; space++)
        {
            printf(" ");
        }

        for (int hash = 0; hash < row; hash++)
        {
            printf("#");
        }

        printf("  ");

        for (int hash = 0; hash < row; hash++)
        {
            printf("#");
        }

        printf("\n");
        row++;
    }
    while (row <= height);

    return 0;
}
