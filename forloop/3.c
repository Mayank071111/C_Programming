//WAP to print min among 3 numbers
#include<stdio.h>
void main(){
	int num1,num2,num3;
	printf("Enter num1:");
	scanf("%d",&num1);
	printf("Enter num2:");
	scanf("%d",&num2);
	printf("Enter num3:");
	scanf("%d",&num3);
	if(num1<num2 && num1<num3){
		printf("%d is smallest \n",num1);
	}else if(num2<num1 && num2<num3){
		printf("%d is smallest \n",num2);
	}else if(num1==num2 && num1==num3){
		printf("All are equal\n");
	}else{
		printf("%d is smallest\n",num3);
	}
}
