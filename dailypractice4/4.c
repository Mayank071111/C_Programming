/*
1	b	2	d
	1	b	2
		1	b
			1
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		int num=1;
		char ch='b';
		for(int sp=2;sp<=i;sp++){
			printf("\t");
		}

		for(int j=rows;j>=i;j--){
			if(j%2==0){
				printf("%d\t",num);
				num=num+1;

			}
			else{
				printf("%c\t",ch);
				ch=ch+2;
			}
		}
		printf("\n");
	}
}
