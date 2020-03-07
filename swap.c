#include<stdio.h>

int main(void){
	int a=5;
	int b=7;
	printf("before swaping a=%d and b=%d\n",a,b);
	b=a+b;
	a=b-a;
	b=b-a;
	printf("after swaping a=%d and b=%d\n",a,b);
	return 0;
}
