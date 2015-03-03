#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,j,b,num=0,n;
    char str[100];
    while(gets(str))
    {
        i=0;
        while(str[i]!='\0')
        {
            num=0;
            while(str[i]>='0'&&str[i]<='9')
            {
                num+=(str[i++]-'0');
            }
            for(j=0;j<num;j++)
            {
                if(str[i]=='b')
                {
                    printf(" ");
                }
                else
                {
                    printf("%c",str[i]);
                }
            }
            if(str[i]=='!'){printf("\n");}
            i++;
        }
        printf("\n");
    }
    return 0;
}
