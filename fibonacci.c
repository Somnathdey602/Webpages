#include<stdio.h>
#include<math.h>
int main ()
{
	float a,b,n;
	printf("enter a no.");
	scanf("%f",&n);
	a=5*n*n-4;
	b=5*n*n+4;
	if((sqrt(a)-(int)sqrt(a))==0.0||(sqrt(b)-(int)sqrt(b))==0.0)
		printf("it is a fibonacci no.");
	else
		printf("it is not a fibonacci no.");
	return 0;
}
