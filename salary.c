#include<stdio.h>

void main(void)
{
	int salary, da, hra, total_salary;
	printf("Basic salary:");
	scanf("%d", &salary);
	da = (salary / 100) * 40;
	hra  = (salary / 100) * 20;
	total_salary = salary + da + hra;
	printf("%d \n", total_salary);
}
