#include<stdio.h>
int main()
{
	int a,s,b,c,n,r;
	for(n=10;n<=100;n++)
	{
		int i=n;
		r=0;
		s=0;
		for(a=0;i>0;a++)
		{
			r=r*10+i%10;
			i/=10;
		}
		c=r*r;
		int j=c;
		for(b=0;c>0;b++)
		{
			s=s*10+c%10;
			c/=10;
		}
		if(n*n==s)
			printf("%d:%d %d:%d\n",n,r,j,s);
		//	printf("\n");
	}
	return 0;
}
