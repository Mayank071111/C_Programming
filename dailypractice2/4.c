/*
D	C	B	A
c	b	a
B	A
a
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		char ch1='A'+rows-i;
		char ch2='a'+rows-i;
		for(int j=rows;j>=i;j--){
			if(i%2!=0){
				printf("%c\t",ch1);
				ch1--;
			}else{
				printf("%c\t",ch2);
				ch2--;
			}

		}
		printf("\n");
	}
}
