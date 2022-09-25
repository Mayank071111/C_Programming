/*fibonacci series*/
#include<stdio.h>
void main(){
	int a=0,b=1,sum=0;
	int end;
	printf("Enter end:");
	scanf("%d",&end);
	while(sum<=end){
		printf("%d\t",sum);
		a=b;
		b=sum;
		sum=a+b;
	}
}
