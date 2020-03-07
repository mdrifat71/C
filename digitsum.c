#include<stdio.h>

int main(void){
	int number;
	printf("Number:");
	scanf("%d", &number);
	number = number % 10 + number / 1000;
	printf("%d\n", number); 
}
