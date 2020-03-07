#include<stdio.h>

int main(void){
	int radius;
	printf("Type radius:");
	scanf("%d",&radius);
	float area = 3.1416*radius*radius;
	printf("Area is %.3f\n",area);

	return 0;
}
