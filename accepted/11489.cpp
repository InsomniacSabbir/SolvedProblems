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

int main()
{
    int n,t;
    scanf("%d",&t);
    fr(n,1,t)
    {
        char str[1100];
        mem(str,0);
        int arr[10],temp;
        mem(arr,0);
        scanf("%s",str);
        int i,total=0,move=1;
        int len=strlen(str);
        //printf("%d\n",len);
        fr(i,0,len-1)
        {
            temp=str[i]-'0';
            //printf("%d\n",temp);
            arr[temp]++;
            total+=temp;
        }
        //printf("%d\n",total);
        int flag=0,innerflag=0;
        int div;
        while(flag==0 && len>0)
        {
            //printf("len = %d\t total = %d\n",len,total);
            if(len==1)
            {
                len--;
                move++;
            }
            else
            {
                div=total/3;
                temp=total-(div*3);
                innerflag=0;
                while(innerflag==0 && temp<10)
                {
                    //printf("temp = %d\n",temp);
                    if(arr[temp])
                    {
                        arr[temp]--;
                        innerflag=1;
                    }
                    else
                    {
                        div--;
                        temp=total-(div*3);
                    }
                }
                if(innerflag==1)
                {
                    total=total-temp;
                    move++;
                    len--;
                }
                else
                {
                    flag=1;
                }
            }
        }
        if(move%2==1)
        {
            printf("Case %d: T\n",n);
        }
        else if(move%2==0)
        {
            printf("Case %d: S\n",n);
        }

    }
    return 0;
}
