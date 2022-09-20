//WAP to find the sum of numbers that are divisible by 5 in given range
#include<stdio.h>
void main(){
	int a;
	int b;
	int sum=0;
	printf("Enter strting number:");
	scanf("%d",&a);
	printf("Enter ending number:");
	scanf("%d",&b);
	for(int i=a;i<b;i++){
		if(i%5==0){
			sum=sum+i;
		}
	}
	printf("Sum of numbers divisible by 5 is %d\n",sum);
}
