/*
- - - - A
- - - A B
- - A B C
- A B C D
A B C D E
*/
#include<stdio.h>
void main(){
	char ch;
	for(int i=1;i<=5;i++){
		ch='A';
		for(int sp=4;sp>=i;sp--){
			printf("- ");
		}
		for(int j=1;j<=i;j++){
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
