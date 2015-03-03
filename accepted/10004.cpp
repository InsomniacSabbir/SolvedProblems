#include<stdio.h>
#include<math.h>
#include<string.h>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<iostream>

#define ll long long int
#define repz(a,n) for(a=0;a<n;a++)
#define repo(a,n) for(a=1;a<=n;a++)
#define pb push_back
#define mem(a,b) memset(a,b,sizeof(a))

using namespace std;

vector<ll>V[300],A,B;
ll color[300],visit[300];

ll travarse()
{
    ll i,j,temp,relation=0;
    A.pb(0);
    while(A.size()!=0)
    {
        repz(i,A.size())
        {
            repz( j ,V[A[i]].size() )
            {
                temp=V[A[i]][j];
                if(visit[temp]==0)
                {
                    visit[temp]=1;
                    B.pb(temp);
                    if(color[temp]==0)
                    {
                        if(color[A[i]]==1)
                        {
                            color[temp]=2;
                        }
                        else if(color[A[i]]==2)
                        {
                            color[temp]=1;
                        }
                    }
                }
                else
                {
                    if(color[temp]==color[A[i]])
                    {
                        relation=1;
                    }
                }
            }
            if(relation==1){break;}
        }
        if(relation==1)
        {
            break;
        }
        else
        {
            A.clear();
            A=B;
            B.clear();
        }
    }
    if(relation==1)
        return 0;
    else
        return 1;
}
int main()
{
    ll n,i,j,x,y,a,b,m,l,source,dest,ans;

    while(scanf("%lld",&n)==1&&n!=0)
    {
        /*initializing*/

        mem(visit,0);
        mem(color,0);
        repz(a,250){V[a].clear();}
        A.clear();
        B.clear();

        /*initialized*/

        scanf("%lld",&l);
        repo(a,l)
        {
            scanf("%lld %lld",&source,&dest);
            V[source].pb(dest);
            V[dest].pb(source);
        }

        color[0]=1;
        visit[0]=1;

        ans=travarse();

        if(ans==0)
        {
            printf("NOT BICOLORABLE.\n");
        }
        else
        {
            printf("BICOLORABLE.\n");
        }
    }

    return 0;
}
