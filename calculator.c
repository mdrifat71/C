#include<stdio.h>
void main(void)
{
	int num1, num2, choice;
	printf("Type two number:");
	scanf("%d%d", &num1, &num2);
	printf("1\tAdd\n2\tSubstract\n3\tMultiply\n4\tDivision\nYour choice:");
	scanf("%d", &choice);
	switch(choice){
	
		case 1:
			printf("%d\n", num1 + num2);
			break;
		case 2:
			printf("%d\n", num1 - num2);
			break;
		case 3:
			printf("%d\n", num1 * num2);
			break;
		case 4:
			printf("%d\n", num1 / num2);
			break;
		default:
			printf("nothing");
	}
}
