#include <stdio.h>
#include <cs50.h>

int get_positive_int(string prompt);

int main(void)
{
	int height = get_positive_int("Height: \n");
	
	for(int i = 1; i<=height; i++)
	{
		for(int j = height; j>i; j--){
			printf(" ");
		}

		for(int k = 1; k<=i; k++){
			printf("#");
		}
		printf("\n");
	}

	
}
	
	// prompt user for positive integer
	int get_positive_int(string prompt)
	{
		int n;
		do
		{
			n = get_int("%s", prompt);
		}
		while (n < 1 ||  n > 8);
		return n;
	}

