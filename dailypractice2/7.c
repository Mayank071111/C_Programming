//WAP to print first composite number b/w given range
#include<stdio.h>
void main(){
	int start,end;
	printf("Enter start:");
	scanf("%d",&start);
	printf("Enter end:");
	scanf("%d",&end);
	for(int i=start;i<=end;i++){
		int count = 0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				count = count+1;
			}
		}
		if(count!=2){
			printf("First composite number is %d\n",i);
			break;
		}
	}
}
