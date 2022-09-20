//WAp to print divisors of the number
#include<stdio.h>
void main(){

	int num;
	int count=0;
	printf("Enter any number:");
	scanf("%d",&num);
	for(int i=1;i<num;i++){
	
		if(num%i==0){
			count=count+1;
		}
	}
	printf("Count is: %d\n",count);
}
