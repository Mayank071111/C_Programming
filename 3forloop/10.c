//WAP to print the numbers in a given range and their multiplicative inverse 
#include<stdio.h>
void main(){
	
	int a;
	int b;
	float d;
	printf("Enter starting number:");
	scanf("%d",&a);
	printf("Enter ending number:");
	scanf("%d",&b);
	for(int i=a;i<=b;i++){
		d=(float)1/i;
		printf("%d = %f\n",i,d);
	}
}
