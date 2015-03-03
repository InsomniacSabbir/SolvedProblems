#include<stdio.h>
#include<string.h>
#include<math.h>

typedef struct arra
{
    char arr[26];
}arra;

int main()
{
    arra ob[15];
    int i,j,k,N,l,m,counterarr[10000],counter,maxi,res,temp;
    while(scanf("%d",&N)==1)
    {
        getchar();
        if(N==0)break;
        maxi=0;
        memset(counterarr,0,sizeof(counterarr));
        for(i=1;i<=N;i++)
        {
            gets(ob[i].arr);
        }
        for(i=1;i<=N;i++)
        {
            counter=0;
            for(j=0;j<25;j++)
            {
                if(ob[i].arr[j]=='X'){counter++;}
            }
            if(counter>maxi)
                    {maxi=counter;}
            counterarr[i]=counter;

            //printf("line=%d\tcount=%d\n",i,counterarr[i]);
        }
        res=0;
        for(k=1;k<=N;k++)
        {
            temp=maxi-counterarr[k];
            res+=temp;
        }
        printf("%d\n",res);
    }
    return 0;
}
