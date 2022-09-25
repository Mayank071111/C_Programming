//WAP to check whether a number is perfect number or not
#include<stdio.h>
void main(){
	int num,sum=0;
	printf("Enter a number:");
	scanf("%d",&num);
	for(int i=1;i<num;i++){
		if(num%i==0){
			sum=sum+i;
		}
	}
	if(sum==num){
		printf("%d is perfect number\n",num);
	}else{
		printf("%d is not perfect number\n",num);
	}
}
