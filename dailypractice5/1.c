/*
A	B	C	D
	A	B	C
		A	B
			A
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		char ch='A';
		for(int sp=2;sp<=i;sp++){
			printf("\t");
		}
		for(int j=4;j>=i;j--){
			printf("%c\t",ch);
			ch=ch+1;
		}
		printf("\n");
	}
}
