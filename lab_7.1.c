#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float max(int arr[],int);
float min(int arr[],int);
float avg(int arr[],int);
float std_dev(int arr[],int);
float* ret(int arr[],int n);
int main()
{
	int i,a,n,c;
	float *p;
	printf("enter no. of elements of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter your choice\n1.maximum\n2.minimum\n3.average\n4.standard deviation\n5.exit\n");
	scanf("%d",&c);
	p=ret(arr,n);
	switch (c)
	{
		case (1):
		printf("maximum is %.f\n",*p);
		main();
		break;
		case (2):
		printf("minimum is %.f\n",*(p+1));
		main();
		break;
		case (3):
		printf("average is %f\n",*(p+2));
		main();
		break;
		case (4):
		printf("standard deviation is %f\n",*(p+3));
		main();
		break;
		case (5):
		break;
		default:
		printf("invalid choice\n");
		break;
	}
	return 0;
}
float max(int arr[],int n)
{
	int i,max=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	return (float)max;
}
float min(int arr[],int n)
{
	int i,min=999999;
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		min=arr[i];
	}
	return (float)min;
}
float avg(int arr[],int n)
{
	int i,avg,a;
	float s=0.0;
	for(i=0;i<n;i++)
	{
		s+=arr[i];
	}
	s=s/(float)n;
	return s;
}
float std_dev(int arr[],int n)
{
	int i,j;
	float s1=0.0,s2=0.0,stddev,arr1[n];
	for(i=0;i<n;i++)
	{
		s1+=arr[i];
	}
	s1=s1/(float)n;
	for(j=0;j<n;j++)
	{
		arr1[j]=((float)arr[j]-s1)*((float)arr[j]-s1);
		s2+=arr1[j];
	}
	s2=s2/(float)n;
	stddev=sqrt(s2);
	return stddev;
}
float* ret(int arr[],int n)
{
	float *a;
	a=(float*)malloc(4*sizeof(float));
	a[0]=max(arr,n);
	a[1]=min(arr,n);
	a[2]=avg(arr,n);
	a[3]=std_dev(arr,n);
	return a;
}
