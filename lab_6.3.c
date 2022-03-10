#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int bitwise (int,int);
int notbit (int,int);
int bin (int);
int main()
{
	int n1,n2,b,dec;
	printf("enter two positive integers\n");
	scanf("%d%d",&n1,&n2);
	if(n1<0||n2<0)
	printf("invalid input\n");
	else
	{	
		printf("1.Using bitwise\n2.Without using bitwise\n3.exit\n");
		scanf("%d",&b);
		switch(b)
		{
			case (1):
			printf("the no. of bits to be reversed are %d\n",bitwise(n1,n2));
			break;
			case (2):
			printf("the no. of bits to be reversed are %d\n",notbit(n1,n2));
			break;
			case (3):
			exit(0);
			break;
			default:
			printf("invalid input\n");
			return 0;
			break;
		}
		return main();
	}
}
int bitwise(int n1,int n2)
{
	int n,c;
	n=n1^n2;
	for(c=0;n;c++)
	{
		n=n&(n-1);
	}
	return c;
}
int bin(int dec)
{
	int i=1;
	int k=0;
	while(dec!=0)
	{
		k+=(dec%2)*i;
		dec/=2;
		i*=10;
	}
	return (k);
}
int notbit(int n1,int n2)
{
	n1=bin(n1);
	n2=bin(n2);
	int n=0,x,y;
	while(n1!=0)
	{
		x=n1%10;
		y=n2%10;
		if(x!=y)
		{
			n++;
		}
		n1/=10;
		n2/=10;
	}
	return n;
}
