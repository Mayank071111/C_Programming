//WAP to print all even numbers in revers order and all odd numbers in the standard way both seprately
#include<stdio.h>
void main(){
	
	int startnum; //starting num
	int endnum; //ending num
	printf("Enter start num:");
	scanf("%d",&startnum);
	printf("Enter end num:");
	scanf("%d",&endnum);
	printf("Even numbers are: ");
	for(int i=endnum;i>=startnum;i--){
		if(i%2==0){
			printf("%d ",i);
		}
	}
	printf("\nOdd numbers are: ");
	for(int i=startnum;i<=endnum;i++){
		if(i%2!=0){
			printf("%d ",i);
		}
	}
}
