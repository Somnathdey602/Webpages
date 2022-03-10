#include<stdio.h>
int max(int n,int i,int arr[]);
int min(int n,int i,int arr[]);
int main()
{
	int n,i,j=0;
	printf("enter the no. of terms to be entered\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the set of nos.\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("the maximum no. is %d\nthe minimum no. is %d\n",max(n,j,arr),min(n,j,arr));
	return 0;
}
int min(int n,int i,int arr[])
{
	if(n>=0)
	{
		if (arr[n]<i)
		{
			i=arr[n];
		}
	min(n-1,i,arr);
	}
	else
		return i;
}
int max(int n,int i,int arr[])
{
	static int a=-999999;
	if(i<n)
	{
		if(a<arr[i])
			a=arr[i];
		max(n,i+1,arr);
	}
	else
		return a;
}
