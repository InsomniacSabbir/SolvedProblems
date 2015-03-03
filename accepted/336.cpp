#include<stdio.h>
#include<math.h>
#include<string>
#include<string.h>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

vector< int > data[100000],v1,v2;
int visited[100000];
set< int > s;

int travarse(int node,int limit)
{
    int i,j,k,counter=0;
    v1.push_back(node);
    visited[node]=1;
    for(k=1;k<=limit;k++)
    {
        for(i=0;i<v1.size();i++)
        {
            if(visited[v1[i]]==0&&data[v1[i]].size()!=0)
            {
                counter++;
            }
            //printf("node=%d\tsize=%d\n",v1[i],data[node].size());
            for(j=0;j<data[v1[i]].size();j++)
            {
                if(visited[data[v1[i]][j]]==0)
                {
                    //printf("count=%d\tdest=%d\n",counter,data[v1[i]][j]);
                    visited[data[v1[i]][j]]=1;
                    counter++;
                    v2.push_back(data[v1[i]][j]);
                }
            }
        }
        v1.clear();
        v1=v2;
        v2.clear();
    }
    return counter;
}

int main()
{
    int N,nCase=1,i,j,limit,node,k,ans,total,max;
    while(scanf("%d",&N)==1&&N!=0)
    {
        s.empty();
        for(k=1;k<=N;k++)
        {
            scanf("%d%d",&i,&j);
            if(i!=j)
            {
                data[i].push_back(j);
                data[j].push_back(i);
            }
            s.insert(i);
            s.insert(j);
        }
        //printf("size=%d\n",s.size());
        while(scanf("%d%d\n",&node,&limit)==2&&(node!=0||limit!=0))
        {
            v1.clear();
            v2.clear();
            memset(visited,0,sizeof(visited));
            total=travarse(node,limit);
            //printf("total=%d\n",total);
            ans=s.size()-total;
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",nCase,ans-1,node,limit);
            nCase++;
            v1.clear();
            v2.clear();
        }
        for(i=1;i<=1000;i++)
        data[i].clear();
        s.clear();
    }

    return 0;
}
