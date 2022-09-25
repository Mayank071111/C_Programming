/*
3	b	2	d
b	2	d
1	d
d
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		int num = rows-i;
		char ch = 'a'+ i-1;
		for(int j=rows;j>=i;j--){
			if((i+j)%2!=0){
				printf("%d\t",num);
				num=num-1;
				ch=ch+1;
			}else{
				printf("%c\t",ch);
				ch=ch+1;
			}
		}
		printf("\n");
	}
}
