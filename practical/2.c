//write a program to print the addition of 1-10 with 10 to 1
#include<stdio.h>
void main(){
	
	int x=1;
	int y=10;	
	for(int i=1;i<=10;i++){
		printf("%d + %d = %d\n",i,y,i+y);
		y--;
	}

}
