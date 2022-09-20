/*
D	C	B	A
e	f	g	h
F	E	D	C
g	h	i	j
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		char ch1='A'+rows+i-2;
		char ch2='a'+rows+i-2;
		for(int j=1;j<=rows;j++){
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
