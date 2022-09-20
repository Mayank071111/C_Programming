// while loop
//take an input from user and count no. of digits
#include<stdio.h>
void main(){
	
	int num;
	int count=0;
	printf("Enter number:");
	scanf("%d",&num);
	int a=num;
	while(num>0){
	
		num=num/10;
		count=count+1;
	}
	printf("Number of digits in %d is: %d",a,count);
}
