/*
5	
5	d
5	d	4
5	d	4	b
5	d	4	b	3
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		int num=rows;
		char ch='a'+rows-2;
		for(int j=1;j<=i;j++){
			if(j%2!=0){
				printf("%d\t",num);
				num=num-1;
			}else{
				printf("%c\t",ch);
				ch=ch-2;
			}
		}
		printf("\n");
	}
}
