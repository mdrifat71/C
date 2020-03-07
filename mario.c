#include<stdio.h>

void piramid(int height);
int main(void)
{
    int height = 0;
    
    while(height < 1 || height >8){
        printf("height:"); //promt user to enter the height of the piramid until it's grater than 0 or less than 9
        scanf("%d",&height); //store user input into height variable
    }

    piramid(height); //call the piramid function and it will print out the piramid with the height of given argument
    
}

void piramid(int height){
    
    for(int i=0 ;i < height ; i++){ //this loop indicate the row

        for(int j=height-1; j>i; j--){ //this loop print the space
            printf(" ");
        }

        for(int k=0; k<=i;k++){
            printf("#");
        }
        printf("\n"); //end of the row and print a new line

    }
}

