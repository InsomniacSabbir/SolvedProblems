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

int fact[1010][1000];
vector<int>prime;
int maxi[1010];

bool isPrime(int n)
{
    int i,j;
    j=sqrt(n)+1;
    if(n%2==0)
        return false;
    for(i=3;i<=j;i+=2)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

void gen()
{
    int i;
    prime.pb(2);
    fr(i,3,1000)
    {
        if(isPrime(i))
        {
            prime.pb(i);
            //printf("%d-->prime\n",i);
        }
    }
    return ;
}

void factGen()
{
    int i,j;
    fr(i,1,1000)
    {
        j=0;
        int temp=i;
        while(temp>=prime[j])
        {
                if(temp%prime[j]==0)
                {
                    fact[i][prime[j]]++;
                    temp=temp/prime[j];
                }
                else
                {
                    j++;
                }

        }
        maxi[i]=j;
        /*fr(j,0,maxi[i])
        {
            printf("%d <===> %d %d\n",i,prime[j],fact[i][prime[j]]);
        }*/
    }
    return ;
}

int main()
{
    mem(fact,0);
    prime.clear();
    mem(maxi,0);
    gen();
    factGen();
    int n,t;
    scanf("%d",&t);
    fr(n,1,t)
    {
		
        vector<int>Pr,Ocur,tempP,tempOcur;
        int N,A,B;
        scanf("%d %d %d",&N,&A,&B);
        int upper;
        if(maxi[A]>maxi[B])
        {
            upper=maxi[A];
        }
        else
        {
            upper=maxi[B];
        }
        int ans;
        int j;
        Pr.clear();
        Ocur.clear();
        tempP.clear();
        tempOcur.clear();
        fr(j,0,upper)
        {
            ans=fact[A][prime[j]];
            //printf("first %d %d %d\n",A,prime[j],ans);
            tempP.pb(prime[j]);
            tempOcur.pb(ans);
        }

        fr(j,0,upper)
        {
            ans=fact[B][prime[j]];
            Pr.pb(prime[j]);
            Ocur.pb(ans);
            //printf("second %d %d %d\n",A,prime[j],ans);
        }
        vector<int>Xp,Yo;

        int i;
        fr(i,2,N)
        {
            Xp.clear();
            Yo.clear();

            fr(j,0,upper)
            {
                Xp.pb(tempP[j]);
                Yo.pb(tempOcur[j]+Ocur[j]);
                //printf("%d %d\n",Xp[j],Yo[j]);
            }
            tempP.clear();
            tempOcur.clear();
            tempP=Pr;
            tempOcur=Ocur;
            Pr.clear();
            Ocur.clear();
            Pr=Xp;
            Ocur=Yo;
        }
        //int xxx=Pr.size()-1;
        fr(i,0,upper)
        {
            if(Ocur[i]!=0)
            {
                printf("%d %d\n",Pr[i],Ocur[i]);
            }
        }
        
            printf("\n");
    }

    return 0;
}
