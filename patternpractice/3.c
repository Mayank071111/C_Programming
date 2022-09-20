/*
1 A 2 B
1 A 2
1 A
1
*/
#include<stdio.h>
void main(){
	int a;
	char ch;
	for(int i=1;i<=4;i++){
		a=1;
		ch='A';
		for(int j=4;j>=i;j--){
			if(j==4 || j==2){
				printf("%d ",a);
				a++;
			}else{
				printf("%c ",ch);
				ch++;
			}
		}
		printf("\n");
	}
}
