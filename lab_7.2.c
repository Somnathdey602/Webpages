#include<stdio.h>
int ins(int arr[],int,int,int);
int del_p(int arr[],int,int);
int del_v(int arr[],int,int);
int main()
{
	int n,a,ch,x,pos,val;
	printf("enter the no. of elements \n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements of the array\n");
	for(a=0;a<n;a++)
	{
		scanf("%d",&arr[a]);
	}
	printf("enter your choice\n1.insert \n2.delete by position\n3.delete by value\n");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("enter position,data\n");
		scanf("%d%d",&pos,&x);
		ins(arr,n,pos,x);
	}
	if(ch==2)
	{
		printf("enter position\n");
		scanf("%d",&pos);
		del_p(arr,n,pos);
	}
	if(ch==3)
	{
		printf("enter the value \n");
		scanf("%d",&val);
		del_v(arr,n,val);
	}
	return 0;
}
int ins(int arr[],int n,int pos,int x)
{
	int i,j;
	for(i=n-1;i>=pos-1;i--)
		arr[i+1]=arr[i];
	arr[pos-1]=x;
	printf("final array:\n");
	for(j=0;j<=n;j++)
		printf("%d,",arr[j]);
	printf("\n");
	return 0;
}
int del_p(int arr[],int n,int pos)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		if(i>=pos-1)
		arr[i]=arr[i+1];
	}
	printf("final array:\n");
	for(j=0;j<n-1;j++)
		printf("%d,",arr[j]);
	printf("\n");
	return 0;
}
int del_v(int arr[],int n,int val)
{
	int i,j,k,s=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==val)
		{
			k=i;
			s++;
			for(i=k;i<n;i++)
			{
				arr[i]=arr[i+1];
			}
			i=0;
		}
	}
	printf("final array:\n");
	for(j=0;j<(n-s);j++)
		printf("%d,",arr[j]);
	return 0;
}
