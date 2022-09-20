//WAP to print sum of first 10 odd numbers
#include<stdio.h>
void main(){
	int sum=0;
	for(int i=1;i<=20;i++){
	
		if(i%2!=0){
			sum=sum+i;
		}
	}
	printf("Sum of first 10 odd numbers is: %d\n",sum);

}
