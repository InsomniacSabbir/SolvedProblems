#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10000];
    int a=0,count,b;
    while(gets(ch))
    {
        count=0;
        for(b=0;ch[b]!='\0';b++)
        {

        }

        for(a=0;a<b-1;a++)
        {
            if((ch[a]>='a'&&ch[a]<='z')||(ch[a]>='A'&&ch[a]<='Z'))
            {
                if((ch[a+1]<'A'||ch[a+1]>'z')||(ch[a+1]<'a'&&ch[a+1]>'Z'))
                {
                    count++;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
