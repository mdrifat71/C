#include<stdio.h>
void main(void){
	int uper,lower,number;
	printf("Number:");
	scanf("%d", &number);
	if(number % 10 == 0){
		uper = number;
		lower = number - 10;
	}else{
		uper = number + (10- (number % 10));
		lower = number  - (number % 10);
	}
	printf("The number is between %d and %d \n", lower , uper); 
}
