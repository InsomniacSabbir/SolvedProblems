#include<stdio.h>
#include<math.h>
#include<string.h>

typedef struct sent
{
    int len;
    char str[3000];
}sent;

int main()
{
    sent ob[300];
    int i=0,j,max=0;
    for(j=0;j<110;j++)
    {
        memset(ob[j].str,'\0',sizeof(ob[j].str));
    }
    max=0;
    while(gets(ob[i].str))
    {
        ob[i].len=strlen(ob[i].str);
        if(max<ob[i].len)
        {
            max=ob[i].len;
        }
        i++;
    }
    i--;
    int pos=0,flag=1;
    while(flag!=0)
    {
        flag=0;

        for(j=i;j>=0;j--)
        {
            if(pos>=ob[j].len){printf(" ");}
            else
            {
                flag=1;
                printf("%c",ob[j].str[pos]);
            }
        }
        printf("\n");
        pos++;
        if(pos==max)
        {
            flag=0;
        }
    }
    return 0;
}
