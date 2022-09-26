//WAP to print whether the given number is strong number or not
#include<stdio.h>
void main(){
	int num,sum=0;
	printf("Enter num:");
	scanf("%d",&num);
	int temp=num;
	while(num>0){
		int rem=0;
		int fact=1;
		rem=num%10;
		for(int i=1;i<=rem;i++){
			fact=fact*i;
		}
		sum=sum+fact;
		num=num/10;
	}
	if(sum==temp){
		printf("%d is strong number\n",temp);
	}
}
