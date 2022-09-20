//WAP To find the sum of numbers that are not divisible by 3 upto a given number
#include<stdio.h>
void main(){

	int num;
	int sum=0;
	printf("Enter any number:");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		if(i%3!=0){
			sum=sum+i;
		}
	}	
	printf("Sum of numbers not divisble by 3 is: %d\n",sum);
}
