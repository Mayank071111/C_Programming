//take 5 input from user as marks and print total marks
#include<stdio.h>
void main(){
	 
	int tmarks=0;
	for(int i=1;i<=5;i++){
		int x;
		printf("Enter marks:");
		scanf("%d",&x);
		tmarks=tmarks+x;
	
	}
	printf("Total marks of student is %d\n:",tmarks);
}
