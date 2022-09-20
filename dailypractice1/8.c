//WAP to print first prime number bw given range
#include<stdio.h>
void main(){
	int start,end,count=0;
	printf("Enter start:");
	scanf("%d",&start);
	printf("Enter end:");
	scanf("%d",&end);
	for(int i=start;i<=end;i++){
		count=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				count=count+1;
			}
		}
		if(count==2){
			printf("First prime number is %d\n",i);
			break;	
		}
		
	}
}
