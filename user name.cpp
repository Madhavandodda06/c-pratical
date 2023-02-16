#include<stdio.h>
int main(){
	char name,rename;
	printf("Enter the user name:");
	scanf("%s",&name);
	printf("reenter the user name:");
	scanf("%s",&rename);
	if(name=rename)
	printf("User name is valid");
	else printf("user name is invalid");
	return 0;
}