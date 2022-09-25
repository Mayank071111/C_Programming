//WAp to print count of digits of a given number
#include<stdio.h>
void main(){
	int num,count=0;
	printf("Enter num:");
	scanf("%d",&num);
	while(num>0){
		num=num/10;
		count=count+1;
	}
	printf("Count of digits of number = %d\n",count); 
}
