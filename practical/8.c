//take number from user and print product of digits
#include<stdio.h>
void main(){
	
	int num,rem;
	int product=1;
	printf("Enter any number:");
	scanf("%d",&num);
	while(num>0){
	
		rem=num%10;
		product=product*rem;
		num=num/10;
	}
	printf("Product of digits is %d\n",product);
}
