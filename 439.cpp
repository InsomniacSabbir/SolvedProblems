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
#define mknd make_node


LL board[10][10];
map<LL,LL>col;
map<LL,LL>row;
LL visited[100];
VLL A,B;
//LL clock[10];


LL abso(LL a,LL b)
{
    if(a>b)
        return (a-b);
    else
        return (b-a);
}

LL make_node(char c,LL i)
{
    LL node=i-1;
    node=node*8;
    node=node+(c-'a'+1);
    return node;
}

bool valid(LL node,LL root)
{
    bool flag=true;
    if(visited[node]!=0||node>64||node<1)
    {
        flag=false;
    }
    LL n_row=row[node];
    LL r_row=row[root];
    LL n_col=col[node];
    LL r_col=col[root];
    LL col_diff=abso(r_col,n_col);
    LL row_diff=abso(r_row,n_row);
    if(row_diff==1)
    {
        if(col_diff!=2)
        {
            flag=false;
        }
    }
    if(row_diff==2)
    {
        if(col_diff!=1)
        {
            flag=false;
        }
    }
    if(row_diff!=1&&row_diff!=2)
    {
        flag=false;
    }
    if(col_diff!=1&&col_diff!=2)
    {
        flag=false;
    }
    return flag;
}

LL bfs(LL source,LL dest)
{
    LL clock[10];
    clock[0]=17;
    clock[1]=15;
    clock[2]=6;
    clock[3]=10;
    clock[4]=17;
    clock[5]=15;
    clock[6]=6;
    clock[7]=10;
    LL found=0,move=0,i,a,b,temp;
    A.pb(source);
    visited[source]=1;
    while(found!=1&&A.size()!=0)
    {
        move++;
        //cout<<move<<endl;
        fr(a,0,A.size()-1)
        {
            LL root;
            root=A[a];
            fr(b,0,7)
            {
                if(b==0||b==1||b==2||b==7)
                {
                    temp=root-clock[b];
                }
                else
                temp=root+clock[b];
                if(valid(temp,root))
                {
                    //cout<<"MOVE:  "<<move<<"---"<<"root: "<<root<<"<--->"<<"roaming: "<<temp<<endl;
                    B.pb(temp);
                    visited[temp]=1;
                }
                //cout<<"temp= "<<temp<<endl;
                if(root==dest)
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
        if(found==1)
        {
            //move++;
            break;
        }
        A.clear();
        A=B;
        B.clear();
    }

    return move;
}

void initialize()
{
    LL i,j,val=1;
    mem(board,0);
    fr(i,1,8)
     fr(j,1,8)
     {
        board[i][j]=val;
        row[val]=i;
        col[val]=j;
        val++;
     }
}

int main()
{
    initialize();

    LL num1,num2,node1,node2,ans;
    char let1,let2;
    while(1)
    {
        ans=0;
        A.clear();
        B.clear();
        mem(visited,0);
        if(!(cin>>let1>>num1>>let2>>num2))
        {
            break;
        }
        node1=mknd(let1,num1);
        node2=mknd(let2,num2);

        //cout<<node1<<"<--->"<<node2<<endl;

        ans=bfs(node1,node2);
        ans--;
        if(node1==node2)
        {
            ans=0;
        }
        //ans++;
        cout<<"To get from "<< let1 << num1 <<" to "<< let2 << num2 <<" takes "<< ans <<" knight moves."<<endl;
    }
    return 0;
}
