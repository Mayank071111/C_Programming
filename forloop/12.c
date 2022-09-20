//WAp to take two characters if these characters are equal then print them as it is but if they are unequal then print their differenc
#include<stdio.h>
void main(){

	char c1;
	char c2;
	int count=0;
	printf("Enter char1:");
	scanf(" %c",&c1);
	printf("Enter char2:");
	scanf(" %c",&c2);
	if(c1==c2 || c2==c1){
		printf(" %c \n",c1);
		printf(" %c \n",c2);
	}else{
	
		for(int i=c1;i<c2;i++){
			count=count+1;
		}
		printf("the difference between %c and %c is: %d\n",c1,c2,count);
	}
}


