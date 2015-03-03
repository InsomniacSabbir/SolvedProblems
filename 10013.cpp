#include<stdio.h>
#include<math.h>
#include<string.h>

char ch,str[1000009],arr[1000009],sol[1000009];

int main()
{
    int n,m,tCase,nCase,num,i,j,temp,k;

    scanf("%d",&tCase);
    //printf("\n");
    for(nCase=1;nCase<=tCase;nCase++)
    {
        memset(sol,'0',sizeof(sol));
        memset(str,'0',sizeof(str));
        memset(arr,'0',sizeof(arr));
        scanf("%d",&num);
        getchar();
        for(i=1;i<=num;i++)
        {
            scanf("%c%c%c",&str[i],&ch,&arr[i]);
            getchar();
            //printf("%c %c\n",str[i],arr[i]);
        }
        for(j=num,i=num;i>0;i--,j--)
        {
            temp=arr[i]-'0'+str[i]-'0';
            //printf("temp=%d\n",temp);
            temp=sol[j]+temp-'0';
            sol[j]=(temp%10)+'0';
            sol[j-1]+=temp/10;
        }
        for(i=0;i<=num;i++)
        {
            if(sol[i]=='0'&&i==0)
            {

            }
            else
            printf("%c",sol[i]);
        }
        printf("\n");
        if(tCase!=nCase)
        {
            printf("\n");
        }
    }
    return 0;
}
