//WAP to print character whose asicii is even
#include<stdio.h>
void main(){
	
	char c;
	printf("Enter a character:");
	scanf(" %c",&c);
	if(c%2==0)
	{
		printf(" %c\n",c);
	}
}
