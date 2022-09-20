/*
a
A	B
a	b	c
A	B	C	D
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		char ch1='a';
		char ch2='A';
		for(int j=1;j<=i;j++){
			if(i%2!=0){
				printf("%c\t",ch1);
				ch1++;
			}else{
				printf("%c\t",ch2);
				ch2++;
			}
		}
		printf("\n");
	}
}
