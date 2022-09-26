//WAP to print the sum of even digits in given number
#include<stdio.h>
void main(){
	int num,rem,sum=0;
	printf("Enter num:");
	scanf("%d",&num);
	while(num>0){
		rem=num%10;
		if(rem%2==0){
			sum=sum+rem;
		}
		num=num/10;
	}
	printf("Sum of even digits = %d\n",sum);
}
