#include<stdio.h>
int main()
{
	int a,b=0,c=1,n;
	printf("enter a no.\n");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		if(b>=0)
			{
				printf("term %d %d\n",a,b);
				c=c+b;
				b=c-b;
			}
		else
		{
			printf("overflow");
			break;
		}
	}
	return 0;
}
