//WAP to take number from 0 to 5 nd print spelling
#include<stdio.h>
void main(){

	int num;
	printf("Enter a number betwween 0-5 :");
	scanf("%d",&num);
	switch(num){
		
		case 1:
			printf("One \n");
			break;
		case 2:
			printf("two \n");
			break;
		case 3:
			printf("Three \n");
			break;
		case 4:
			printf("Four \n");
			break;
		case 5:
			printf("Five \n");
			break;
		default:
			printf("entered number is greater than 5 \n");
	}
}
