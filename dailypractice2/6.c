//WAP to print whether given number is composite or not
#include<stdio.h>
void main(){
	int num,count=0;
	printf("Enter num:");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		if(num%i==0){
			count = count+1;
		}
	}
	if(count!=2){
		printf("Composite number\n");
	}else{
		printf("Not composite number\n");
	}
}
