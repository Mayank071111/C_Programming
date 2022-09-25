/*
a
b	B
c	C	c
d	D	d	D
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		char ch1='a'+i-1;
		char ch2='A'+i-1;
		for(int j=1;j<=i;j++){
			if(j%2!=0){
				printf("%c\t",ch1);
			}else{
				printf("%c\t",ch2);
			}
		}
		printf("\n");
	}
}
