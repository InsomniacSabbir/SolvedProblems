#include<stdio.h>
#include<math.h>
int main()
{
    int N,a,b,c,flag,arr[10000],maximum=0,sum,i;
    while(scanf("%d",&N)==1&&N!=0)
    {
        sum=0;
        for(a=1;a<=N;a++)
        {
            scanf("%d",&arr[a]);
        }
        i=0;
        maximum=0;
        while(i<=N&&arr[i]<=0)
         {
            i++;
            sum=0;
          for(a=i;a<=N;a++)
           {
            sum=sum+arr[a];
            if(sum>maximum){maximum=sum;}
            if(sum<0){sum=0;}
           }
         }
        if(maximum==0){printf("Losing streak.\n");}
        else{printf("The maximum winning streak is %d.\n",maximum);}
    }
    return 0;
}
