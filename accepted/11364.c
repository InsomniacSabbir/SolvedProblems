#include<stdio.h>
int main()
{
    int T,a,n,b,c,d,A[100],i,j;
    scanf("%d",&T);
    for(a=1;a<=T;a++)
    {
        scanf("%d",&n);
        for(b=0;b<n;b++)
        {
            scanf("%d",&A[b]);
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(A[i]>A[j])
                {
                    c=A[i];
                    A[i]=A[j];
                    A[j]=c;
                }
            }
        }
        d=(A[n-1]-A[0])*2;
        printf("%d\n",d);
    }
}
