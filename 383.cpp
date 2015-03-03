#include<stdio.h>
#include<string.h>
#include<string>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<queue>
#define ll long long

using namespace std;

vector<ll>V[40],A,B;
ll visit[100][100],arr[100];

ll k,a,b,counter=1,total;

int bfs(int source,int dest)
{
    ll breaker=0,found=0;
    int flag=0;
    A.push_back(source);
    arr[source]=1;
    while(A.size()!=0)
    {
        //printf("hahah...%d\n",A.size());
        flag=0;
        for(a=0;a<A.size();a++)
        {
            //printf("111111111111111111\n");

            for(b=0;b<V[A[a]].size();b++)
            {
                //printf("2222222222222222222\n");

                if(arr[V[A[a]][b]]==0)
                {
                    //visit[A[a]][V[A[a]][b]]==1;
                    //visit[V[A[a]][b]][A[a]]==1;
                    B.push_back(V[A[a]][b]);
                    arr[V[A[a]][b]]=1;
                }
                if(V[A[a]][b]==dest)
                {
                    found=1;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        A.clear();
        A=B;
        B.clear();
        //printf("%d\n",A.size());
        if(flag==1||A.size()==0)
        {
            break;
        }
        else
        {

            counter++;
        }
        //counter++;
    }
    if(found==1)
    return counter;
    else
    {
        return 0;
    }
}

int main()
{
    ll y,x,tCase,nCase,i,j,n,ans,weight,m,o,k;
    char ch[1000];
    char source[1000],dest[1000];
    scanf("%lld",&tCase);
    printf("SHIPPING ROUTES OUTPUT\n\n");
    for(nCase=1;nCase<=tCase;nCase++)
    {
        printf("DATA SET  %lld\n\n",nCase);
        for(i=0;i<40;i++)
            V[i].clear();
        map<string,ll>orig;
        //map<ll,string>rev;
        scanf("%lld %lld %lld",&m,&n,&o);
        for(i=0;i<m;i++)
        {
            scanf("%s",&ch);
            orig[ch]=i;
        }
        total=m;
        for(j=0;j<n;j++)
        {
            scanf("%s",&source);
            x=orig[source];
            scanf("%s",&dest);
            y=orig[dest];
            V[x].push_back(y);
            V[y].push_back(x);
        }
        x=0;
        y=0;
        for(k=0;k<o;k++)
        {
            counter=1;
            A.clear();
            B.clear();
            //memset(visit,0,sizeof(visit));
            memset(arr,0,sizeof(arr));
            ans=0;

            scanf("%lld %s %s",&weight,&source,&dest);
			x=orig[source];
            y=orig[dest];
            ans=bfs(x,y);

            /*if(x==y)
            {
                ans=weight*100;
                printf("%lld\n",ans);
            }
            else */if(ans==0)
            {
                printf("NO SHIPMENT POSSIBLE\n");
            }
            else
            {
                ans=weight*ans*100;
                printf("$%lld\n",ans);
            }
            //printf("%lld\n",V[2][0]);
        }
        printf("\n");
    }
    printf("END OF OUTPUT\n");
    return 0;
}
