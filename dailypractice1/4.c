/*
5	4	3	2	1
D	C	B	A
3	2	1
B	A
1
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		int num=rows-i+1;
		char ch='A'+rows-i;
		for(int j=rows;j>=i;j--){
			if(i%2!=0){
				printf("%d\t",num);
				num--;
			}else{
				printf("%c\t",ch);
				ch--;
			}
		}
		printf("\n");
	}
}
