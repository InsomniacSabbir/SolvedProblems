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
    int t,n;
    scanf("%d",&t);
    getchar();
    fr(n,1,t)
    {
        vector<char>V;
        V.clear();
        vector<double>D;
        D.clear();
        double temp;
        int before,after,digit;
        char str[100000];
        mem(str,'\0');
        gets(str);

        int len=strlen(str);
        int i;
        fr(i,0,len-1)
        {
            if(str[i]=='=')
            {
                V.pb(str[i-1]);
                int x=i+1;
                digit=0;
                int flag=0;
                int xxx=0;
                before=0;
                after=0;
                while(!xxx)
                {
                    if(str[x]>='0'&& str[x]<='9' && flag==0)
                    {
                        int zzz=str[x]-'0';
                        before=before*10;
                        before+=zzz;
                    }
                    else if(str[x]=='.')
                    {
                        flag=1;
                    }
                    else if(str[x]>='0'&&str[x]<='9' && flag==1)
                    {
                        int zzz=str[x]-'0';
                        digit++;
                        after=after*10;
                        after+=zzz;
                    }
                    else
                    {
                        xxx=1;
                    }
                    x++;
                }
                x--;
                //printf("%d %d\n",before,after);
                temp=before+(double)(after/pow(10,digit));
                //printf("%c\n",str[x]);
                if(str[x]=='M')
                {
                    //printf("dhukc\n");
                    temp=temp*1000000;
                }
                else if(str[x]=='k')
                {
                    temp=temp*1000;
                }
                else if(str[x]=='m')
                {
                    temp=temp/1000;
                }
                //printf("temp=%lf\n",temp);
                D.pb(temp);
            }
            if(V.size()==2)
            {
                i+=len;
            }
        }
        printf("Problem #%d\n",n);
        if(V[0]=='I'&&V[1]=='P')
        {

            printf("U=%.2lfV\n",D[1]/D[0]);
        }
        else if(V[1]=='I'&&V[0]=='P')
        {
            printf("U=%.2lfV\n",D[0]/D[1]);
        }
        else if((V[0]=='I'&&V[1]=='U')||((V[1]=='I'&&V[0]=='U')))
        {
            printf("P=%.2lfW\n",D[1]*D[0]);
        }
        else if(V[0]=='U'&&V[1]=='P')
        {
            printf("I=%.2lfA\n",D[1]/D[0]);
        }
        else if(V[1]=='U'&&V[0]=='P')
        {
            printf("I=%.2lfA\n",D[0]/D[1]);
        }
        printf("\n");
    }
    return 0;
}
