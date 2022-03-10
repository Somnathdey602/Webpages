#include<stdio.h>
#include<math.h>
float fun(float x)
{
	float y;
	y=x*pow(2.71828,x)-1;
	return y;
}
float main()
{
	float a,b,i,j=0.0;
	printf("enter a and b");
	scanf("%f%f",&a,&b);
	if(fun(b)<0)
	{
		a=a+b;
		b=a-b;
		a=a-b;
	}	
	while(j<10.0)
	{
		i=(a+b)/2.0;
		if(fun(i)<0.0)
			a=i;
		else
			b=i;
		printf("%f\t%f\t%f\t%f\n",a,b,i,fun(i));
		j++;
	}
	return 0;
}
