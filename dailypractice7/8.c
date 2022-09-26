/* WAp to print strong number upto a given range
IP: Start 100
    End   1000
OP: 145
*/
#include<stdio.h>
void main(){
	int start,end,sum=0;
	printf("Enter start:");
	scanf("%d",&start);
	printf("Enter end:");
	scanf("%d",&end);
	for(int i=start;i<=end;i++){
		int temp=0;
		temp=i;
		while(i>0){
			int rem=0;
			int fact=1;
			rem=i%10;
			for(int j=1;j<=rem;j++){
				fact=fact*j;
			}
			sum=sum+fact;
			i=i/10;
		}
		if(sum==temp){
			printf("%d ",temp);
		}
	}

}
