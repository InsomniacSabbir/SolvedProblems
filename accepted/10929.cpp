#include<stdio.h>
#include<string.h>
int main()
{
    char str[1010];
    int i=0,temp;
    while(gets(str)&&strcmp(str,"0")!=0)
    {
        temp=str[i]-48;
        while(str[++i])
        {
            temp=((temp*10)+(str[i]-48))%11;
        }
        if(temp)
            printf("%s is not a multiple of 11.\n",str);
        else
            printf("%s is a multiple of 11.\n",str);
        i=0;
    }
    return 0;
}
