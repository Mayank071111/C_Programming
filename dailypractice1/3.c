/*
a
b	a
c	b	a
d	c	b	a
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		char ch='a'+i-1;
		for(int j=1;j<=i;j++){
			printf("%c\t",ch);
			ch=ch-1;
		}
		printf("\n");
	}
}
