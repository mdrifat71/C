#include<stdio.h>

int main(void){

	int a,b,c;
	a = 2,b = 3,c = 4;
	printf("before swap a=%d , b=%d and c =%d\n",a,b,c);
	a = a+b+c;
	b = a-b-c; //b =2 = ^a
	c = a-b-c; //c= 3 = ^b
	a = a-b-c; //a =4 = ^c
	printf("after swap a=%d , b=%d and c=%d\n",a,b,c);

}
