#include<stdio.h>
void main(void)
{
	int cp, sp,porl;
	printf("Type cost and sell price:");
	scanf("%d%d", &cp, &sp);	
	if(cp < sp){
		int tmp = sp - cp;
		porl = (cp / 100) * tmp;
		printf("Profit, %d \n", porl);
	}else if (cp > sp){
		int tmp = cp - sp;
		porl = (cp / 100) * tmp;
		printf("Loss !!, %d ", porl);
	}else{
		printf("cp equal to sp");
	}
}
