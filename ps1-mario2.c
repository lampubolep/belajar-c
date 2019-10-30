#include <cs50.h>
#include <stdio.h>

int get_positive_int(string prompt);

int main(void)
{
    int height = get_positive_int("Height: \n");
    
    for(int i = 1; i<=height; i++)
    {
        for(int j = height; j>i; j--)
        {
            printf(" ");
        }
        
        for(int k = 1; k<=i; k++)
        {
            printf("#");
        }
        
        for(int l = 1; l<=2; l++)
        {
            printf(" ");
        }
        
        for(int m = 1; m<=i; m++)
        {
            printf("#");
        }
        printf("\n");
    }
}

// Prompt user for positive integer

int get_positive_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    
    while (n < 1 || n > 8);
    return n;
}

