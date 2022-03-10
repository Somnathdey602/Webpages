#include<stdio.h>
int main()
{
	int fact=1,n,a;
	printf("enter a no.\n");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		fact=fact*a;
	}
	printf("the factorial of the no. is %d",fact);
	return 0;
}
