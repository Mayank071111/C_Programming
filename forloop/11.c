//wAP to take a number as input and check whether it is prime or not
//prime number is a number divisible by itself and 1 only
#include<stdio.h>
void main(){

	int a,count=0;
	printf("Enter a number:");
	scanf("%d",&a);
	for(int i=1;i<=a;i++){

		if(a%i==0){
			count=count+1;
		}
	}
	if(count!=2){
		printf("Not a prime number \n");
	}else{
		printf("Is a prime number \n");
	}
}
