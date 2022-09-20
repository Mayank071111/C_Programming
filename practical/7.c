//take input number from user and print the sum of digits
#include<stdio.h>
void main(){

	int num;
	int rem,sum=0;
	printf("Enter any number:");
	scanf("%d",&num);
	while(num>0){
	
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("sum of digits is %d\n",sum);
}
