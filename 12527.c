#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,a,b,c,str[11];
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int flag=1,count=0,temp;

        for(a=n;a<=m;a++)
        {
             memset(str,0,sizeof(str));
            temp=a;
            while(temp!=0)
            {
                c=temp%10;
                if(str[c]==0)
                {
                    str[c]=1;flag=1;
                }
                else{flag=0;break;}
                temp=temp/10;
            }
            if(flag==1){count++;}
        }
        printf("%d\n",count);
    }
}
