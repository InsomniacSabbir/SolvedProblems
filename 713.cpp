#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int nCase,tCase,i,j,k,temp,m,n;
    char str[210],arr[210];

    scanf("%d",&tCase);
    getchar();
    for(nCase=1;nCase<=tCase;nCase++)
    {
        memset(arr,'0',sizeof(arr));
        memset(str,'0',sizeof(str));
        scanf("%s %s",&str,&arr);
        m=strlen(str);
        n=strlen(arr);
        if(m<n)
        {
            m=n;
        }
        int sum[300]={0};
        for(i=0;i<m;i++)
        {
            //printf("str=%c\tarr=%c\n",str[i],arr[i]);
            if(arr[i+1]=='\0')
            {
                arr[i+1]='0';
            }
            if(str[i+1]=='\0')
            {
                str[i+1]='0';
            }
            temp=str[i]-'0'+arr[i]-'0';
            //printf("temp=%d\n",temp);
            sum[i]=sum[i]+(temp%10);
            temp=temp/10;
            arr[i+1]+=temp;
            //printf("temp=%d\n",temp);
            //printf("sum[%d]=%d\n",i,sum[i]);
            //printf("str=%c\tarr=%c\n",str[i+1],arr[i+1]);
        }
        if(temp!=0)
        {
            sum[i]=arr[i]-'0';
            m++;
        }
        int flag=0;
        for(i=0;i<m;i++)
        {
            if(sum[i]!=0&&flag==0)
            {
                flag=1;
            }
            if(flag==1)
            printf("%d",sum[i]);
        }
        printf("\n");
    }

    return 0;
}
