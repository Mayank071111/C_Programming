//WAP to check whether the input is leap year or not
#include<stdio.h>
void main(){

	int year;
	printf("Enter a year:");
	scanf("%d",&year);
	if(year%4==0 && year>0){
		printf("leap year\n");
	}else if(year%4!=0 && year>0){
		printf("Not a leap year\n");
	}else{
		printf("Invalid input");
	}
}
