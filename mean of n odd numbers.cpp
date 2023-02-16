#include<stdio.h>
int main()
{
	int i,sum=0,n,x;
	float avg;
	printf("Enter the n odd numbers:");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2){
	if(i % 2 !=0){
	printf("%d\n",i);
	sum=sum+i;
	}
}
	avg=sum/n;
	printf("%f",avg);
	return 0;
}