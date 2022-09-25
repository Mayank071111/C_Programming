//Wap to print factorial of given number
#include<stdio.h>
void main(){
	int num;
	int fact=1;
	printf("Enter number:");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		fact=fact*i;
	}
	printf("Factorial of %d = %d\n",num,fact);
}
