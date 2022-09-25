/*WAP to print niven or harshad number upto given rangee
Start:10
End:20
*/
#include<stdio.h>
void main(){
	int start,end;
	int rem,temp;
	printf("Enter start:");
	scanf("%d",&start);
	printf("Enter end:");
	scanf("%d",&end);
	for(int i=start;i<=end;i++){
			temp=i;
			int sum=0;
			while(temp>0){
				rem=temp%10;
				sum=sum+rem;
				temp=temp/10;
			}
			if(i%sum==0){
				printf("%d ",i);
			}
		}
}


