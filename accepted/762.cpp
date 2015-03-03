#include<iostream>
#include<sstream>
#include<string>
#include<cstdlib>
#include<vector>
#include<map>
#include<queue>
#include<stack>
#include<cmath>
#include<cctype>
#include<set>
#include<bitset>
#include<algorithm>
#include<list>

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

using namespace std;
//#define print1(a)    cout<<a<<endl
//#define print2(a,b) cout<<a<<" "<<b<<endl
//#define print3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
//#define oo          (1<<30)
#define PI          3.141592653589793
#define pi          2*acos(0)
//#define ERR         1e-5
//#define PRE         1e-8
#define SZ(a)       (int)a.size()
#define LL          long long
#define ISS         istringstream
#define OSS         ostringstream
#define VS          vector<string>
#define VI          vector<int>
#define VD          vector<double>
#define VLL         vector<long long>
#define SII         set<int>::iterator
#define SI          set<int>
#define mem(a,b)    memset(a,b,sizeof(a))
#define fr(i,a,b)   for(i=a;i<=b;i++)
#define frn(i,a,b)  for(i=a;i>=b;i--)


//#define fri(a,b)    for(i=a;i<=b;i++)
//#define frin(a,b)   for(i=a;i>=b;i--)
//#define frj(a,b)    for(j=a;j<=b;j++)
//#define frjn(a,b)   for(j=a;j>=b;j--)
//#define frk(a,b)    for(k=a;k<=b;k++)
//#define frkn(a,b)   for(k=a;k>=b;k--)
//#define frl(a,b)    for(l=a;l<=b;l++)
//#define frln(a,b)   for(l=a;l>=b;l--)

#define EQ(a,b)     (fabs(a-b)<ERR)
#define all(a,b,c)  for(int I=0;I<b;I++)    a[I] = c
#define CROSS(a,b,c,d) ((b.x-a.x)*(d.y-c.y)-(d.x-c.x)*(b.y-a.y))
#define sqr(a)      ((a)*(a))
#define FORE(i,a)   for(typeof((a).begin())i=(a).begin();i!=(a).end();i++)
//#define BE(a)       a.begin(),a.end()
//#define rev(a)      reverse(BE(a));
//#define sorta(a)    sort(BE(a))
#define pb          push_back
#define popb        pop_back
#define round(i,a)  i = ( a < 0 ) ? a - 0.5 : a + 0.5;
#define makeint(n,s)  istringstream(s)>>n
#define countbit(mask) __builtin_popcount(musk)
#define mod         1000000007

VLL V[10000],A,B;
LL printPath[10000],parent[10000],visited[10000];
LL flag=0;

int path(LL source,LL dest)
{

    LL temp;
    printPath[0]=(dest);
    temp=parent[dest];
    LL x=0;
    while(parent[temp]!=-1)
    {
        x++;

        printPath[x]=(temp);
        temp=parent[temp];
        //printf("parent=%lld\t child=%lld\n",parent[temp],temp);

    }
    x++;
    printPath[x]=(source);
    LL i;
   /* for(i=0;i<=x;i++)
    {
        printf("%d ",printPath[i]);
    }
    printf("\n");
    */
    return x;
}

int bfs(LL source,LL dest)
{

    LL a,b,found=0,temp;
    A.pb(source);
    parent[source]=-1;
    visited[source]=1;
    while(found==0&&A.size()!=0)
    {

        for(a=0;a<A.size();a++)
        {

            for(b=0;b<V[A[a]].size();b++)
            {

                temp=V[A[a]][b];
                if(visited[temp]!=1)
                {

                    parent[temp]=A[a];

                    B.pb(temp);
                    visited[temp]=1;
                }
                if(temp==dest)
                {
                    found=1;
                    break;
                }
            }
            if(found==1)
            {
                break;
            }
        }
        if(found==1||A.size()==0)
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

    return found;
}

int main()
{
    LL n,i,j,x,y,k,ans,p,q,h=0;
    char node1[10],node2[10];
    while(scanf("%lld",&n)!=EOF)
    {

        LL l;
        //("while\n")
        for(l=0;l<10000;l++)
        {
            V[l].clear();
        }

        map<string,LL>M,take;
        map<LL,string>N;
        A.clear();
        B.clear();
        mem(printPath,0);
        mem(parent,0);
        mem(visited,0);
        x=0;
        y=0;
        for(i=0;i<n;i++)
        {

            cin>>node1>>node2;
            if(take[node1]!=1)
            {
                take[node1]=1;
                M[node1]=x;
                N[x]=node1;
                x++;
            }
            if(take[node2]!=1)
            {
                take[node2]=1;
                M[node2]=x;
                N[x]=node2;
                x++;
            }
            p=M[node1];
            q=M[node2];
            V[p].pb(q);
            V[q].pb(p);
        }

        cin>>node1>>node2;

        if(h==1)
        {
            printf("\n");
        }
        h=1;

//printf("a=%lld\tb=%lld\tc=%lld\td=%lld\n",M["a"],M["b"],M["c"],M["d"]);

        if(n==0||(take[node1]!=1||take[node2]!=1))
        {
            printf("No route\n");
        }
        else
        {
            ans=bfs(M[node1],M[node2]);
            if(M[node1]==M[node2])
            {
                //printf("\n");
            }
            else if(ans==1)
            {

                LL z=path(M[node1],M[node2]);
               // cout<<node1<<" "<<;
                for(k=z;k>=1;k--)
                {

                    cout<<N[printPath[k]]<<" "<<N[printPath[k-1]]<<endl;
                }
            }
            else
            {
                printf("No route\n");
            }


        }
        }
        //printf("\n");


    return 0;
}
