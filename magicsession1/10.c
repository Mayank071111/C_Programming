/*
D	D	D	D
	C	C	C
		B	B
			A
*/
#include<stdio.h>
void main(){
	
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	char ch='A'+rows-1;
	for(int i=1;i<=rows;i++){
		for(int sp=1;sp<i;sp++){
			printf("\t");
		}
		for(int j=rows;j>=i;j--){
			printf("%c\t",ch);
		}
		printf("\n");
		ch--;
	}
}
