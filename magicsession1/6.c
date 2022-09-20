/*
D	e	F	g
e	D	c	B
F	g	H	i
g	F	e	D
*/
#include<stdio.h>
void main(){
	
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		char ch1='D'+i-1;
		char ch2='d'+i-1;
		for(int j=1;j<=rows;j++){
			if((i+j)%2==0){
				printf("%c\t",ch1);
				ch1++;
				ch2++;
			}else{
				printf("%c\t",ch2);
				ch2++;
				ch1++;
			}
		}
		printf("\n");
	}
}
