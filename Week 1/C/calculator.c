#include <stdio.h>
#include <cs50.h>

int add(int a, int b);

int main(void)
{
    int x = get_int("What's x's value ? : ");
    int y = get_int("What's y's value ? : ");

    int z = add(x,y);
    printf("%i\n",z);

    
    printf("%i\n", add(x,y));
}

int add(int a, int b)
{
    return a + b;
}