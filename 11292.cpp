#include<stdio.h>
#include<algorithm>

using namespace std;
int main()
{
   // freopen("insert.txt", "r", stdin);
    int N,M,a,b,c,d,flag=1,count,i,j;
    while(scanf("%d%d",&N,&M)==2&&N!=0&&M!=0)
    {
        flag = 1;
        b=1;
        count=0;
        int dragon[N],knights[M];
         for(a=1;a<=N;a++)
            {
                scanf("%d",&dragon[a]);
            }
             for(a=1;a<=M;a++)
            {
                scanf("%d",&knights[a]);
            }
        if(N>M)
        {
            flag=0;
        }
        else
        {
            sort(knights+1, knights+M+1);
            sort(dragon+1, dragon+N+1);
            for(i=1; i<=N;){
                for(;b<=M;){
                    if(knights[b]>=dragon[i]){
                        count += knights[b];
                        b++;
                        break;
                    }
                    else b++;
                }
                if(b>M){ flag = 0; break; }
                i++;
            }

        }
        if(flag==1){printf("%d\n",count);}
        else{printf("Loowater is doomed!\n");}
    }
return 0;
}
