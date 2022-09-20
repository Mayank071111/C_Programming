//wap to take a number as input and print whther it is prime number or not
#include<stdio.h>
void main(){

 	int num;
	int count=0;
	printf("Enter any number:");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		
		if(num%i==0){
			count=count+1;
		}
	}
	if(count==2){
		printf("%d is prime number \n",num);
	}else{
		printf("%d is not prime number \n",num);
	}
}
