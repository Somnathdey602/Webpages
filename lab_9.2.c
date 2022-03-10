#include<stdio.h>
#define S 500
#define STR 10
void listing(char s1[],char s2[],int start,int end);
int main()
{
    int i,j;
	char s1[S],s2[STR];
	printf("enter the string\n");
	gets(s1);
	printf("enter the string to be checked\n");
	gets(s2);
	for(i=0,j=0;s1[i]!='\0';i++)
    {
        if(s1[i]=='.'||s1[i]=='?'||s1[i]=='!')
        {
            listing(s1,s2,j,i);
            j=i+1;
        }
    }
	return 0;
}
void listing(char s1[],char s2[],int start,int end)
{
	int i,j;
	for(i=start;i<end;i++)
    {
        if(s1[i]==s2[0])
        {
            for(j=1,i++;s1[i]==s2[j];i++,j++);
            if(s2[j]=='\0')
            {

                for(;start<=end;start++)
                    printf("%c",s1[start]);
                printf("\n");
                break;
            }
        }
    }
}
