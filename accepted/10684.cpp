#include<stdio.h>
#include<string.h>

int arr[100009];

int main()
{
    int N,i,j,k,l,m,sum,maximum,temp;
    while(scanf("%d",&N)==1&&N!=0)
    {
        arr[0]=0;
        maximum=0;sum=0;
        for(i=1;i<=N;i++)
        {
            scanf("%d",&temp);
            if(arr[i-1]+temp>0)
            {
                arr[i]=arr[i-1]+temp;
                //sum+=arr[i];
                if(arr[i]>maximum)
                {
                    maximum=arr[i];
                }
            }
            else
            {
                arr[i]=0;
            }
            //printf("arr[i]=%d\ti=%d\tsum=%d\tmaximum=%d\n",arr[i],i,sum,maximum);
        }
        if(maximum>0)
        {
            printf("The maximum winning streak is %d.\n",maximum);
        }
        else
        {
            printf("Losing streak.\n");
        }
        memset(arr,0,sizeof(arr));
    }
}
