#include<stdio.h>

void main(void)
{
	short number,reverse_number = 0,digit = 100;
	printf("Number:");
	scanf("%hd", &number);
	while(number != 0)
	{
		reverse_number += (number % 10) * digit;
		number /= 10;
		digit /= 10;
	}
	printf("%hd\n", reverse_number);
}

