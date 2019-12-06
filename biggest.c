#include<stdio.h>
int main()
{
	int a=10,b=60,c=10000,d;
	c=(a>b&&a>c)?a:b>c?b:c;
	printf("the biggest no is:%d",c);
	return 0;
}
