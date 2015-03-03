#include<stdio.h>
#include<math.h>
#include<string.h>

typedef struct web
{
    char str[1000];
}web;

int main()
{
    int tCase,nCase,pos[10000],arr[1000],i,j,n,a,temp;
    web ob[1000];
    scanf("%d",&tCase);
    for(nCase=1;nCase<=tCase;nCase++)
    {
        memset(arr,0,sizeof(arr));
        memset(pos,0,sizeof(pos));
        for(a=1;a<=999;a++){pos[a]=a;}
        for(a=1;a<=10;a++)
        {
            scanf("%s%d",&ob[a].str,&arr[a]);
            //printf("web=%s pos=%d\n",ob[a].str,arr[a]);
        }
        for(i=1;i<10;i++)
        {
            for(j=i+1;j<=10;j++)
            {
                if(arr[j]>arr[i])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    temp=pos[i];
                    pos[i]=pos[j];
                    pos[j]=temp;
                }
            }
        }
        printf("Case #%d:\n",nCase);
        i=1;
        j=1;
        while(j==1)
        {
            printf("%s\n",ob[pos[i]].str);

            if(arr[i]==arr[i+1]){i++;}
            else
                j=0;
        }
    }
    return 0;
}
