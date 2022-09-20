/*
3 b 1 d
a 2 c 0
3 b 1 d
a 2 c 0
*/
#include<stdio.h>
void main(){
	int rows;
	int a;
	char ch;
	printf("Enter no. of rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		a=3;
		ch='a';
		for(int j=1;j<=rows;j++){
			if((i+j)%2==0){
				printf("%d\t",a);
				a--;
				ch++;
			}else{
				printf("%c\t",ch);
				ch++;
				a--;
			}
		}
		printf("\n");
	}
}
