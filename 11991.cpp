#include<stdio.h>
#include<math.h>
#include<vector>
#include<string.h>
#include<map>
using namespace std;

vector<int>V[1000009];
void clear()
{
    int i;
    for(i=0;i<=1000009;i++)
    {
        V[i].empty();
    }
}
int main()
{
    clear();
    int n,q,k,v,i,j;
    while(scanf("%d%d",&n,&q)==2)
    {
        clear();
        for(i=1;i<=n;i++)
        {
            scanf("%d",&j);
            V[j].push_back(i);
        }
        for(j=1;j<=q;j++)
        {
            scanf("%d%d",&k,&v);
            if(k<=V[v].size())
            {
                printf("%d\n",V[v][k-1]);
            }
            else
            {
                printf("0\n");
            }
        }
       clear();
    }
    return 0;
}
