#include <stdio.h>

int main(void){
	int number, upper, lower;
	printf("Number:");
	scanf("%d", &number);
	
	lower = (number / 10) * 10;
	upper = lower + 10;
	printf("The number is between %d - %d \n", lower, upper);
}
