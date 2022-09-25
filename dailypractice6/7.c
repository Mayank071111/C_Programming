//Reverse of a given number
#include<stdio.h>
void main(){
	int num,rem,x;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("Reverse of %d is :",num);
	while(num>0){
		rem=num%10;
		x=rem;
		printf("%d",x);
		num=num/10;
	}
}
