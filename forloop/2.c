//WAP to find max amoung 3 numbers
#include<stdio.h>
void main(){

	int num1,num2,num3;
	printf("Enter num1:");
	scanf("%d",&num1);
	printf("Enter num2:");
	scanf("%d",&num2);
	printf("Enter num3:");
	scanf("%d",&num3);
	if(num1>num2 && num1>num3){
		printf("%d is greater\n",num1);
	}else if(num2>num1 && num2>num3){
		printf("%d is greater\n",num2);
	}else{
		printf("%d is greater\n",num3);
	}

}
