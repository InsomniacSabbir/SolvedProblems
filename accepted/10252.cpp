#include<stdio.h>
#include<string.h>
#include<string>

using namespace std;

int minimum(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    char str[1004],arr[1004];
    int temp1[27],temp2[27],ans[27];
    while(gets(str))
    {
        gets(arr);
        int len,m;
        memset(temp1,0,sizeof(temp1));
        memset(temp2,0,sizeof(temp2));
        memset(ans,0,sizeof(ans));
        int i,j,k;
        j=strlen(str);
        k=strlen(arr);
        if(j>k)
        {
            len=j;
            m=k;
        }
        else
        {
            len=k;
            m=j;
        }
        for(i=0;i<len;i++)
        {
            if(len==j)
            {
                temp1[str[i]-'a'+1]++;
                if(i<m)
                {
                    temp2[arr[i]-'a'+1]++;
                }
            }
            else
            {
                temp2[arr[i]-'a'+1]++;
                if(i<m)
                {
                    temp1[str[i]-'a'+1]++;
                }
            }
        }
        for(i=1;i<=26;i++)
        {
            int y,x;
            if(temp1[i]!=0&&temp2[i]!=0)
            {
                x=minimum(temp1[i],temp2[i]);
            }
            else
            {
                x=0;
            }
            for(y=1;y<=x;y++)
            {
                printf("%c",i+'a'-1);
            }
        }
        printf("\n");
    }
}
