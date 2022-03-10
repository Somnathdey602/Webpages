#include<stdio.h>
#include<math.h>
//#define fun function defination
float fun(float x,float y)
{
    float f;
    f=-x*y*y;
    return f;
}
int main()
{
    float a,b,x,y,h,t,k0,k,k1,x1,y0,y1;
    int c=1;
    printf("Enter x0,y0,h,xn: ");
    scanf("%f%f%f%f",&a,&b,&h,&t);
    x=a;
    y=b;
    x1=x;
    y1=y;
    printf("\nit.  \tx	\ty\n");
    while(x<t)
    {
 		k0=h*fun(x1,y1);
 		y1=y1+k0;
 		x1=x1+h;
 		printf("%2d euler   %0.3f\t%0.5f\n",c,x1,y1);
    	y0=y;
        k=h*fun(x,y);
        y=y+k;
        x=x+h;
        k1=h*fun(x,y);
        y=y0+(k+k1)/2.0;
        printf("%2d m.euler %0.3f\t%0.5f\n",c,x,y);
        c++;
    }
    return 0;
}
