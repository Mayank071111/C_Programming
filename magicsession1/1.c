//WAP to print all the divisiors of given number
#include<stdio.h>
void main(){

	int num;
	printf("Enter number:");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		if(num%i==0){
			printf("%d ",i);
		}
	}
}
