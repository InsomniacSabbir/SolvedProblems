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

typedef struct DNA
{
    char str[110];
    int sort_num;
}DNA;

int main()
{
    DNA temp;
    int tCase,nCase,i,j,N,M,k,counter;
    char ch;
    string arr;
    scanf("%d",&tCase);
    fr(nCase,1,tCase)
    {
		DNA ob[110];
        if(nCase!=1)
            printf("\n");
        scanf("%d %d",&M,&N);
        fr(i,1,N)
        {
			ob[i].str[0]='\0';
			ob[i].sort_num=0;
            cin>>ob[i].str;
            counter=0;
            fr(k,0,M-2)
            {
                fr(j,k+1,M-1)
                {
                    if(ob[i].str[k]>ob[i].str[j])
                    {
                        counter++;
                    }
                }
            }
            ob[i].sort_num=counter;
            //printf("%d\n",ob[i].sort_num);
        }
        
        //sort(ob+1,ob+N);
        
        fr(i,1,N-1)
        {
            fr(j,1,N-1)
            {
                if(ob[j].sort_num>ob[j+1].sort_num)
                {
                    temp=ob[j];
                    ob[j]=ob[j+1];
                    ob[j+1]=temp;
                }
            }
        }

        fr(i,1,N)
        {
            printf("%s\n",ob[i].str);
        }
    }
    return 0;
}
