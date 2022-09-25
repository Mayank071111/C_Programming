/*WAP to print perfect number upto a given range
Ip: Start=1
    End=20
*/
#include<stdio.h>
void main(){
	int start,end;
	printf("Enter start:");
	scanf("%d",&start);
	printf("Enter end:");
	scanf("%d",&end);
	for(int i=start;i<=end;i++){
		int sum=0;
		for(int j=1;j<i;j++){
			if(i%j==0){
				sum=sum+j;
			}
		}
		if(sum==i){
			printf("%d ",sum);
		}
	}
}
