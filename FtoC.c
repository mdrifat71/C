#include<stdio.h> 
	
int fTOh(int f);

int main(void){
	int f,c;
	printf("Type in farenheight:");
	scanf("%d",&f); //take farenheight from the user
	c = fTOh(f); //storing the celcius value into c
	printf("The celcius value is %d\n",c);
	return 0;
}



int fTOh(int f){
	//function for converting farenheigh to celcius

	int c;
	c = (f-32)*5/9;
	return c;
}
