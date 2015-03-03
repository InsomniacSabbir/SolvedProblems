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

int mat[1000][1000];

char A[1000],B[1000];
int lcs()
{
    int i,j;
    int lenA=strlen(A);
    int lenB=strlen(B);
    fr(i,0,lenA)
    {
        mat[i][0]=0;
    }
    fr(i,0,lenB)
    {
        mat[0][i]=0;
    }
    fr(i,1,lenA)
    {
        fr(j,1,lenB)
        {
            if(A[i-1]==B[j-1])
            {
                mat[i][j]=mat[i-1][j-1]+1;
            }
            else
            {
                if(mat[i-1][j]>=mat[i][j-1])
                {
                    mat[i][j]=mat[i-1][j];
                }
                else
                {
                    mat[i][j]=mat[i][j-1];
                }
            }
        }
    }
    return mat[lenA][lenB];
}
int main()
{
    int nCase=1;
    while(A[0]!='#')
    {
        mem(A,0);
        mem(B,0);
        mem(mat,0);
        gets(A);
        if(A[0]=='#')
        {
            break;
        }
        else
        {
            //getchar();
            gets(B);
            int ans=lcs();
            printf("Case #%d: you can visit at most %d cities.\n",nCase,ans);
            nCase++;
        }
    }

	return 0;
}


