#include<stdio.h>
#include<string.h>
int main()
{
    char str[1010000];
    int i=0,temp;
    while(gets(str)&&strcmp(str,"0")!=0)
    {
        temp=str[i]-48;
        i++;
        while(str[i])
        {
            temp=((temp*10)+(str[i]-'0'))%17;
            i++;
        }
        if(temp)
            printf("0\n");
        else
            printf("1\n");
        i=0;
    }
    return 0;
}

