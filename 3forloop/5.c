//WAP to take the number as input and print all the factors of that number
#include<stdio.h>
void main(){

	int num;
	printf("Enter any number:");
	scanf("%d",&num);
	printf("Factors of %d are: ",num);
	for(int i=1;i<=num;i++){
		if(num%i==0){
			printf("%d ",i);
		}
	}

}
