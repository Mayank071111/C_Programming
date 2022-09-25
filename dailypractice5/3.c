/*
3	d	2	c
	d	2	c
		1	d
			d
*/
#include<stdio.h>
void main(){	
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		int num=rows-i;
		char ch='a'+rows-1;
		for(int sp=2;sp<=i;sp++){
			printf("\t");
		}
		for(int j=rows;j>=i;j--){
			if((i+j)%2!=0){
				printf("%d\t",num);
				num=num-1;
			}else{
				printf("%c\t",ch);
				ch=ch-1;
			}
		}
		printf("\n");
	}
}
