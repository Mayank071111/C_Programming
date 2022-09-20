//WAP to find factorial of a given number
#include<stdio.h>
void main(){
	
	int num;
	int fact=1;
	printf("Enter any number:");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		fact=fact*i;
	}
	printf("Factorial of %d = %d\n",num,fact);
}
