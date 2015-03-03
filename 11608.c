#include<stdio.h>
int main()
{
    int temp,T=1,m,arr[13],sum,a,b,c,x=1,pro[13];
    while(x!=0)
    {
        temp=0;
        scanf("%d",&arr[0]);
        if(arr[0]<0){x=0;break;}
        else
        {
            for(a=1;a<=12;a++)
            {
                scanf("%d",&arr[a]);
            }

            for(a=1;a<=12;a++)
            {
                scanf("%d",&pro[a]);
            }

            temp=arr[0];
            printf("Case %d:\n",T);
            for(b=1;b<=12;b++)
            {
                if(temp>=pro[b])
                {
                    printf("No problem! :D\n");
                    temp=(temp-pro[b])+arr[b];
                }
                else
                {
                    printf("No problem. :(\n");
                    temp+=arr[b];
                }
            }
        }
        T++;
    }
    return 0;
}
