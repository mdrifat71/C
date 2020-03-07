#include<stdio.h>

int second(int hour,int min);
int main(void){
	
	int hour,min,sec;
	printf("type hour min sec:");
	scanf("%d%d%d",&hour,&min,&sec);
	int total=second(hour,min)+sec;
	printf("total is : %d\n",total);
	
}

int second(int hour,int min){
	int total=hour*3600+min*60;
	return total;
}
