//WAp to calculate the square root of a given number
#include<stdio.h>
void main(){
	int num;
	printf("Enter any number:");
	scanf("%d",&num);
	printf("Square root of %d = ",num);
	for(int i=1;i<=num;i++){
		if(i*i==num){
			printf("%d",i);
		}
	}

}
