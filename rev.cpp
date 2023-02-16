#include<stdio.h>
int main()
{
	int n,rev=0;
	printf("enter");
	scanf("%d",&n);
	while(n!=0){
		int rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	printf("result%d",rev);
	return 0;
}