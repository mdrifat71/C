#include<stdio.h>

void triangle(int line); //it will take a number and print this number of line

int main(void){
	int line;
	printf("Type how many line:");
	scanf("%d",&line);
	triangle(line);
	return 0;
}

void triangle(int line){
	for(int i=0;i<line;i++){
		
		for(int space=line-1;space>i;space--){
			printf(" ");
		}
		for(int ast=1;ast<=(i+1)*2-1;ast++){
			printf("*");
		}
		printf("\n");
	}
}
