//take an input number from user and print the number in reverse
#include<stdio.h>
void main(){

	int num;
	int rem;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num>0){
	
		rem=num%10;
		printf("%d",rem);
		num=num/10;
	}
}
