// Program to find largest Palindrome product of two three digit numbers
#include <stdio.h>
#include <stdlib.h>

// function to check if a number is palindrome
int check_panlindrome(int n)
{
	int p = n, rev=0;
	while(p!=0)
	{
		rev = p % 10 + rev * 10;
		p = p / 10;
	}
	if(rev==n)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

// main function
int main()
{
	int large_palindrome = 0;
	for (int i=1000;i>99;i--)
	{
		for(int j=1000;j>99;j--)
		{
			int product = i*j;
			if (product < large_palindrome)
				break;
			if (check_panlindrome(product) == 0)
			{
				large_palindrome = product;
			}
		}
	}
	printf("Largest Palindrome is: %d", large_palindrome);
	return 0;
}