#include<stdio.h>
int main()
{
	int num,i,j,x;
	printf("yhfy:");
	scanf("%d",&num);
	for(i=num;i>=1;--i){
		for(x=0;x<num-i;++x)
		printf("");
		for(j=i;j<=2*i-1;++j)
		printf("*");
		for(j=0;j<i-1;++j)
		printf("*");
		printf("\n");
	}
	return 0;
}