//WAP that takes two characters if they are equal print them if they r unequal print difference bw them
#include<stdio.h>
void main(){
	
	char c1;
	char c2;
	printf("Enter char1:");
	scanf(" %c",&c1);
	printf("Enter char2:");
	scanf(" %c",&c2);
	if(c1==c2){
		printf("char1= %c",c1);
		printf("\nchar2= %c",c2);
	}else{
		printf("Difference between  %c and  %c = %d",c1,c2,c2-c1);
	}
}
