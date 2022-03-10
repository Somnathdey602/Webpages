#include<stdio.h>
#include<stdlib.h>
typedef struct telephone
{
	char name[20],email[30],phone_no[10];
}tele;

void add(tele *t)
{
	FILE *fp;
	fp=fopen("directory.txt","a");
	if(fp=='\0')
	{
		printf("Cannot open file.");
		return ;
	}
	getchar();
	printf("Enter Name:");
	gets(t->name);
	printf("Enter phone no:");
	gets(t->phone_no);
	printf("Enter email:");
	gets(t->email);
	fwrite(t,sizeof(tele),1,fp);
	fclose(fp);
	printf("DATA ADDED.\n");
}

void show(tele *t)
{
	FILE *fp;
	fp=fopen("directory.txt","r");
	if(fp=='\0')
	{
		printf("Cannot open file.\n");
		return ;
	}
	if(feof(fp))
	{
		printf("Empty\n");
		fclose(fp);
		return ;
	}
	while(fread(t,sizeof(tele),1,fp))
	{
		printf("%s\t\t",t->name);
		printf("%s\t\t",t->phone_no);
		printf("%s\n",t->email);
	}
	fclose(fp);
	return ;
}
int main()
{
	int i=0;
	tele *t=(tele *)calloc(1,sizeof(tele));
	do
	{
		printf("1.Add new contact\n2.Show all Contacts\n3.Exit\nEnter your choice:");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				add(t);
				break;
			case 2:
				show(t);
				break;
			case 3:
				exit;
				break;
			default:
				printf("INVALID CHOICE:\n");
				break;
		}
	}while(i!=3);
	free(t);
	return 0;
}
