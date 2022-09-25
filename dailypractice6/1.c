/*
A	B	C	D
	B	C	D
		C	D
			D
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		char ch='A'+i-1;
		for(int sp=1;sp<i;sp++){
			printf("\t");
		}
		for(int j=rows;j>=i;j--){
			printf("%c\t",ch);
			ch=ch+1;
		}
		printf("\n");
	}
}
