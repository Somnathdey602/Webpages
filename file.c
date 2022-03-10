#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char name[10], city[10];
    char set_city[10][10];
    int roll, marks, i, flag, count = -1;
    FILE *fp, *fp1;
    fp = fopen(argv[1], "r");
    while(fscanf(fp, "%s%d%d%s", name, &roll, &marks, city) != EOF)
    {
        flag = 0;
        printf("Name:%s roll:%d marks:%d city:%s\n", name, roll, marks, city);
        for(i = count;i >= 0; i-- )
        {
            if(!strcmp(set_city[i], city))
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            count++;
            strcpy(set_city[count], city);
        }

    }
    fclose(fp);
    fp1 = fopen(argv[2], "w");
    for(i = 0; i <= count; i++)
        fprintf(fp1, "%s\n", set_city[i]);
    fclose(fp1);
    return 0;
}
