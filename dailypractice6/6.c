//Sum of digits of a given number
#include<stdio.h>
void main(){
	int num,rem,sum=0;
	printf("Enter number:");
	scanf("%d",&num);
	while(num>0){
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("Sum of digits of number = %d\n",sum);
}
