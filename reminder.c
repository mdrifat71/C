#include<stdio.h>

int main(void){
	int num1,num2;
	printf("Type two Num:");
	scanf("%d%d",&num1,&num2);
	
	while(num1 >= num2){
		num1 -= num2;
	}
	printf("the reminder is %d \n",num1);
	return 0;
}
