/*
A	b	C	d
	d	E	f
		F	g
			g
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	char ch1='A';
	char ch2='a';
	for(int i=1;i<=rows;i++){
		for(int sp=1;sp<i;sp++){
			printf("\t");
		}
		for(int j=rows;j>=i;j--){
			if((i+j)%2!=0){
				printf("%c\t",ch1);
				ch1=ch1+1;
				ch2=ch2+1;
			}else{
				printf("%c\t",ch2);
				ch2=ch2+1;
				ch1=ch1+1;
			}
		}
		printf("\n");
		ch2=ch2-1;
		ch1=ch1-1;
	}
}
