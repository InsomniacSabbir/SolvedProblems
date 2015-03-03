#include<stdio.h>
int main()
{
    int N,b,i,j,d;

        while(scanf("%d",&N)!=EOF)
        {
            int num[N];
            int count=0;
        for(b=0;b<N;b++)
        {
            scanf("%d",&num[b]);
        }
        for(i=1;i<N;i++)
        {
            for(j=N-1;j>=i;j--)
            {
                if(num[j-1]>num[j])
                {
                    d=num[j-1];
                    num[j-1]=num[j];
                    num[j]=d;
                    count++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",count);
    }

    return 0;
}


