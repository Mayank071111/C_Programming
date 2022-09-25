/*WAP to print palindrome number upto given range
Start:20
End:100
*/
#include<stdio.h>
void main(){
	int start,end;
	printf("Enter start:");
	scanf("%d",&start);
	printf("Enter end:");
	scanf("%d",&end);
	for(int i=start;i<=end;i++){
		int temp=0;
		temp=i;
		int x=0,rem;
		while(temp>0){
			rem=temp%10;
			x=rem;
		//	printf("%d",x);
			temp=temp/10;
		}
		if(i==x){
			printf("%d\n",x);
		}
	}
}
