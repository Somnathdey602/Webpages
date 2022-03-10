#include<stdio.h>
#include<stdlib.h>
#include<time.h>
char* encode(char *p,int n1,int n2,int r);
int main()
{
	int n1,n2;
	char p1[100];
	printf("enter the string\n");
	gets(p1);
	char *p=p1;
	printf("enter the lower and upper limit in ascii value\n");
	scanf("%d%d",&n1,&n2);
	srand(time(NULL));
	int r=(rand());
	printf("the random integer is %d\n",r);
	encode(p,n1,n2,r);
	printf("%s",p);
	return 0;
}
char* encode(char *p,int n1,int n2,int r)
{
	int i=0,a[100];
	while(p[i]!='\0')
	{
		a[i]=(int)p[i];
		i++;
	}
	a[i]=0;
	for(i=0;a[i]!=0;i++)
	{
		a[i]=a[i]+r;
//		printf("%d\n",a[i]);
		if(a[i]>n2)
			a[i]=((a[i]-n1)%(n2-n1+1))+n1;
//		printf("%d\n",a[i]);
	}
	for(i=0;a[i]!=0;i++)
	{
		*p=(char)a[i];
		p++;
	}
	return p;
}
