#include<stdio.h>

void main(void)
{
	short a, b, c;
	printf("Type 3 numbers:");
	scanf("%hd %hd %hd", &a, &b, &c);
	a *= 100;
	b *= 10;
	c += a + b;
	printf("%hd\n", c);
}
