#include<stdio.h>
int main()
{
    int N,Q,a,b,c,d,str[100000],strq[100000],i,j,v=1,x=1,pos,flag=1;;
    while(x!=0)
    {
        scanf("%d %d",&N,&Q);
        if(N==0&&Q==0){x=0;}
        else
        {
            for(a=1;a<=N;a++)
            {
                scanf("%d",&str[a]);
            }
            for(a=1;a<=Q;a++)
            {
                scanf("%d",&strq[a]);
            }
            for(i=1;i<N;i++)
            {
                for(j=i+1;j<=N;j++)
                {
                    if(str[i]>str[j])
                    {
                        c=str[i];
                        str[i]=str[j];
                        str[j]=c;
                    }
                }
            }
            printf("CASE# %d:\n",v);
            for(a=1;a<=Q;a++)
            {
                for(b=1;b<=N;b++)
                {
                    if(strq[a]==str[b])
                    {
                        pos=b;
                        b=N+1;
                        flag=1;
                    }
                    else{flag=0;}
                }
                if(flag==0)
                {
                    printf("%d not found\n",strq[a]);
                }
                else
                {
                    printf("%d found at %d\n",strq[a],pos);
                }

            }
        }
        v++;
    }
}
