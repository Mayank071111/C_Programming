//take a number from the user and print the fibonacci series up to that number
//input 10
//output 0 1 1 2 3 5 8
#include<stdio.h>
void main(){
	
	int a=0;
	int b=1;
	int sum=0;
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	while(sum<=num){
		printf("%d ",sum);
		a=b;
		b=sum;
		sum=a+b;
	}
}
