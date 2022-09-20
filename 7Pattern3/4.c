/*
a B c D
b C d E
c D e F
d E f G
*/
#include<stdio.h>
void main(){
	
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		char ch1='a'+i-1;
		char ch2='B'+i-1;
		for(int j=1;j<=rows;j++){
			if(j%2!=0){
				printf("%c\t",ch1);
				ch1++;
			}else{
				printf("%c\t",ch2);
				ch2+=2;
				ch1++;
			}
				
		}
		printf("\n");
	}
}
