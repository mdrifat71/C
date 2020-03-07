#include<stdio.h>
void main(void){
	int count=0,number;
	printf("Number:");
	scanf("%d", &number);
	
	while(number != 0){
		if (number - 500 >= 0){
			number -= 500;
			count++;
			printf("Number is %d \n count is %d \n", number, count);
		}else if (number - 200 >= 0){
			number -= 200;
			count++;
			printf("Number is %d \n count is %d \n", number, count);
		}else if (number - 100 >= 0){
			number -= 100;
			count++;
			printf("Number is %d \n count is %d \n", number, count);
		}else if (number - 50 >= 0){
			number -= 50;
			count++;
			printf("Number is %d \n count is %d \n", number, count);
		}else if (number - 20 >= 0){
			number -= 20;
			count++;
			printf("Number is %d \n count is %d \n", number, count);
		}else if (number - 10 >= 0){
			number -= 10;
			count++;
			printf("Number is %d \n count is %d \n", number, count);
		}else if(number - 5 >= 0){
			number -= 5;
			count++;
			printf("Number is %d \n count is %d \n", number, count);
		}else{
			number -= 1;
			count++;
			printf("Number is %d \n count is %d \n", number, count);
		}
	}
	printf("%d\n", count);
}
