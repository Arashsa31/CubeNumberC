/**
 * @author Arash
 * Write a program that displays the first n cubes. (The number n is entered by the user.)
 * In the example below, the user's input is underlined.
 * How many cubes? 7

 * 1 cubed is 1
 * 2 cubed is 8
 * 3 cubed is 27
 * 4 cubed is 64
 * 5 cubed is 125
 * 6 cubed is 216
 * 7 cubed is 343
 */

#include <stdio.h>
int main()
{
	//variables
	int n, tempCount, counter = 1;

	//input
	printf("How many cubes? ");
	scanf_s("%i", &n);

	//calculation
	while (counter <= n)
	{
		tempCount = counter * counter * counter;
		printf("%i cubed is %i\n", counter, tempCount);
		counter++;
	}
	return 0;
}
