/*
D	c 	B	a
a	B	c	D
F	e	D	c
b	C	d	E
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		if(i%2!=0){
			char ch1=rows+'A'+i-2;
			char ch2='a'+rows+i-2;
			for(int j=1;j<=rows;j++){
				if((i+j)%2==0){
					printf("%c\t",ch1);
					ch1--;
					ch2--;
				}
				else{
					printf("%c\t",ch2);
					ch2--;
					ch1--;
				}
			}
		
			
		}else{
			char ch1='A'+i-2;
			char ch2='a'+i-2;
			for(int j=1;j<=rows;j++){
				if((i+j)%2==0){
					printf("%c\t",ch1);
					ch1++;
					ch2++;
				}
				else{
					printf("%c\t",ch2);
					ch2++;
					ch1++;
				}
		
			}
		
		}	
	

		printf("\n");

	}
}
