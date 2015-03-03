#include<stdio.h>
#include<math.h>
#include<string.h>
#include<string>
using namespace std;

int main()
{
    int i,n,j,k,m,flag=0;
    char str,ch;
    while(scanf("%c",&str)!=EOF)
    {
        if(flag==0)
        {
            if((str>='a'&&str<='z')||(str>='A'&&str<='Z'))
            {
                if(str=='a'||str=='e'||str=='i'||str=='o'||str=='u'||str=='A'||str=='E'||str=='I'||str=='O'||str=='U')
                    flag=1;
                else
                    flag=2;
            }
            else
                flag=0;
        }
        if(flag==1)
        {
            if((str>='a'&&str<='z')||(str>='A'&&str<='Z'))
                printf("%c",str);
            else
            {
                printf("ay",str);
                flag=0;
            }
        }
        else if(flag==2)
        {
            if(ch=='\0')
            {
                ch=str;
                continue;
            }
            if((str>='a'&&str<='z')||(str>='A'&&str<='Z'))
                printf("%c",str);
            else
            {
                printf("%cay",ch);
                ch='\0';
                flag=0;
            }
        }
        if(flag==0)
        {
            printf("%c",str);
        }
    }
    return 0;
}
