#include<stdio.h>
void main(void)
{
	short number, first, middle, last;
	printf("Number:");
	scanf("%hd", &number);
	first = number / 100;
	middle = (number / 10) % 10;
	last = number % 10;
	number = first + middle + last;
	printf("%hd\n", number);
}
