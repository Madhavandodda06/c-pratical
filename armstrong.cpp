#include<stdio.h>
int main()
{
	int num,on,rem,result=0;
	on=num;
	printf("Enter three digits number:");
	scanf("%d",&num);
	while(on !=0){
		rem = on % 10;
		result+=rem*rem*rem;
		on /= 10;
	}
	if (result==num)
	printf("amstrong");
	else
	printf("not an armstrong");

return 0;
}