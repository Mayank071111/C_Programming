//WAP to get 10 numbers from user and print sum and average of numbers
#include<stdio.h>
void main(){

	float avg;
	int x,sum=0;
	for(int i=1;i<=10;i++){
	
		printf("Enter num:");
		scanf("%d",&x);
		sum=sum +x;
	}
	avg=(float)sum/10;
	printf("Sum of numbers is %d\n",sum);
	printf("Average of numbers is %f\n",avg);
}
