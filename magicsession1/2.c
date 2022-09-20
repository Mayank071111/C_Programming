//WAp to count digits in  given number
#include<stdio.h>
void main(){
	
	int num;
	int count=0;
	printf("Enter num:");
	scanf("%d",&num);
	while(num!=0){
		num=num/10;
		count=count+1;
	}
	printf("Digit count is %d\n",count);
}
