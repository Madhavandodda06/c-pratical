#include<stdio.h>
int main()
{
	int num1,num2,c;
	char op;
	printf("Enter the operater");
	scanf("%c",&op);
	printf("Enter two numbers:");
	scanf("%d %d",num1,num2);
	switch(op){
		case'a':
			c=num1+num2;
			break;
		case'b':
			c=num1-num2;
			break;
		case'c':
			c=num1*num2;
			break;
		case'd':
			c=num1/num2;
			break;
			default:{
				printf("error!");
			}
		
		printf("result is %d",c);
}
		return 0;
			
	}
	