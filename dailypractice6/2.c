/*	
			d
		C	d
	b	C	d
A	b	C	d
*/
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		char ch2='a'+rows-i;
		char ch1='A'+rows-i;
		for(int sp=rows-1;sp>=i;sp--){
			printf("\t");
		}
		for(int j=1;j<=i;j++){
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
	}
}
