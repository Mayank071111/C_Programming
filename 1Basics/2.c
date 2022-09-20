//wap to print first 100 numbers
#include<stdio.h>
void main(){

	int endnum;
	printf("Enter ending number:");
	scanf("%d",&endnum);
	for(int i=1;i<=endnum;i++){
		printf("%d\n",i);
	}
}
