#include<stdio.h>
int add(int,int,int,int);
int sub(int,int,int,int);
int mul(int,int,int,int);
int main()
{
	int a,b,ai,bi,ch;
	printf("enter the real and imagenary parts of num 1\n");
	scanf("%d%d",&a,&ai);
	printf("enter the real and imagenary parts of num 2\n");
	scanf("%d%d",&b,&bi);
	printf("enter your choice\n1.addition\n2.subtraction\n3.multiplication\n4.exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case (1):
		add(a,ai,b,bi);
		break;
		case (2):
		sub(a,ai,b,bi);
		break;
		case (3):
		mul(a,ai,b,bi);
		break;
		case (4):
		break;
		default:
		printf("invalid choice");
		break;
	}
	return 0;
}
int add(int a,int ai,int b,int bi)
{
	int i=a+b;int j=ai+bi;
	printf("addition is %d+%di\n",i,j);
	return main();
}
int sub(int a,int ai,int b,int bi)
{
	int i=a-b;int j=ai-bi;
	printf("subtraction is %d+%di\n",i,j);
	return main();
}
int mul(int a,int ai,int b,int bi)
{
	int i=a*b-ai*bi;int j=a*bi+b*ai;
	printf("multiplication is %d+%di\n",i,j);
	return main();
}
