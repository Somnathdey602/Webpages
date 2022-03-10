#include<stdio.h>
#include<stdlib.h>
#define A 5
#define B 7
typedef struct city
{
	char name[10];
	float temp[B];
	float avg;
}c;
void average(c *p);
void sort(c *p);
int main()
{
	int i,j;
	c *pt=(c *)malloc(A*sizeof(c));
	for(i=0;i<A;i++)
	{
		printf("enter name:");
		gets(pt[i].name);
		for(j=0;j<B;j++)
		{
			printf("enter temperature of day %d:",j+1);
			scanf("%f",&pt[i].temp[j]);
		}
		printf("--------------------------\n");
		getchar();
	}
	average(pt);
	sort(pt);
	printf("NAME	AVG.TEMP.\n");
	for(i=0;i<A;i++)
		printf("%s	%f\n",pt[i].name,pt[i].avg);
	free(pt);
	return 0;
}
void average(c *p)
{
	int i,j;
	float t=0.0;
	for(i=0;i<A;i++)
	{
		for(j=0;j<B;j++)
			t+=p[i].temp[j];
		p[i].avg=t/7.0;
		t=0.0;
	}
}
void sort(c *p)
{
	int i,j;
	c t;
	for(i=0;i<A-1;i++)
	{
		for(j=0;j<A-i-1;j++)
		{
			if(p[j].avg<p[j+1].avg)
			{
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
}
