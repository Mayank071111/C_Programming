/*
a
b	c
d	e	f
g	h
i
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	char ch='a';
	for(int i=1;i<=rows;i++){
		if(i<=(rows/2)+1){
			for(int j=1;j<=i;j++){
				printf("%c\t",ch);
				ch=ch+1;
			}
		}
		else{
			for(int j=i;j<=rows;j++){
				printf("%c\t",ch);
				ch=ch+1;
			}
		}
		printf("\n");
	}
}
