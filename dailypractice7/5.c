/*
A
C	B	A
E	D	C	B	A
G	F	E
I
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	char ch='A';
	for(int i=1;i<=rows;i++){
		char x=ch;
		if(i<=(rows/2)+1){
			for(int j=1;j<=(i+i)-1;j++){
				printf("%c\t",x);
				x=x-1;
			}
		}
		else{
			for(int j=i;j<=(2*rows-i);j++){
				printf("%c\t",x);
				x=x-1;
			}
		}
		ch=ch+2;
		printf("\n");
	}
}
