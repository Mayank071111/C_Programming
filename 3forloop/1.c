//WAP to see a given number is a multiple of 3
#include<stdio.h>
void main(){

	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num%3==0){
		printf("%d is multiple of 3\n",num);
	}else{
		printf("%d is not multiple of 3\n",num);
	}
}
