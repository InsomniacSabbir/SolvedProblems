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
#define print1(a)    cout<<a<<endl
#define print2(a,b) cout<<a<<" "<<b<<endl
#define print3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define oo          (1<<30)
#define PI          3.141592653589793
#define pi          (2.0*acos(0.0))
#define ERR         1e-5
#define PRE         1e-8
#define SZ(s)       ((long long)s.size())
#define LL          long long
#define ISS         istringstream
#define OSS         ostringstream
#define VS          vector<string>
#define VI          vector<long long>
#define VD          vector<double>
#define VLL         vector<long long>
#define SII         set<long long>::iterator
#define SI          set<long long>
#define mem(a,b)    memset(a,b,sizeof(a))
#define fr(i,a,b)   for(i=a;i<=b;i++)
#define frn(i,a,b)  for(i=a;i>=b;i--)
#define fri(a,b)    for(i=a;i<=b;i++)
#define frin(a,b)   for(i=a;i>=b;i--)
#define frj(a,b)    for(j=a;j<=b;j++)
#define frjn(a,b)   for(j=a;j>=b;j--)
#define frk(a,b)    for(k=a;k<=b;k++)
#define frkn(a,b)   for(k=a;k>=b;k--)
#define frl(a,b)    for(l=a;l<=b;l++)
#define frln(a,b)   for(l=a;l>=b;l--)
#define REP(i,n)    for(i=0;i<n;i++)
#define EQ(a,b)     (fabs(a-b)<ERR)
#define all(a,b,c)  for(long long I=0;I<b;I++)    a[I] = c
#define CROSS(a,b,c,d) ((b.x-a.x)*(d.y-c.y)-(d.x-c.x)*(b.y-a.y))
#define sqr(a)      ((a)*(a))
#define FORE(i,a)   for(typeof((a).begin())i=(a).begin();i!=(a).end();i++)
#define typing(j,b) typeof((b).begin()) j=(b).begin();
#define BE(a)       a.begin(),a.end()
#define rev(a)      reverse(BE(a));
#define sorta(a)    sort(BE(a))
#define pb          push_back
#define popb        pop_back
#define mp          make_pair
#define round(i,a)  i = ( a < 0 ) ? a - 0.5 : a + 0.5;
#define makelong long(n,s)  istringstream(s)>>n
#define inpow(a,x,y) long long i; a=x;fri(2,y)  a*=x
#define cntbit(mask) __builtin_popcountll(mask)
//0 based print
#define debug_array(a,n) for(long long i=0;i<n;i++) cerr<<a[i]<<" "; cerr<<endl;
#define debug_matrix(mat,row,col) for(long long i=0;i<row;i++) {for(long long j=0;j<col;j++) cerr<<mat[i][j]<<" ";cerr<<endl;}

#define csprnt printf("Case %d: ", ++cas);
#define mod         1000000007
#define eulerconstant 0.5772156649

template<class T1> void debug(T1 e){cout<<e<<endl;}
template<class T1,class T2> void debug(T1 e1,T2 e2){cout<<e1<<"\t"<<e2<<endl;}
template<class T1,class T2,class T3> void debug(T1 e1,T2 e2,T3 e3){cout<<e1<<"\t"<<e2<<"\t"<<e3<<endl;}
template<class T1,class T2,class T3,class T4> void debug(T1 e1,T2 e2,T3 e3,T4 e4){cout<<e1<<"\t"<<e2<<"\t"<<e3<<"\t"<<e4<<endl;}
template<class T1,class T2,class T3,class T4,class T5> void debug(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5){cout<<e1<<"\t"<<e2<<"\t"<<e3<<"\t"<<e4<<"\t"<<e5<<endl;}
template<class T1,class T2,class T3,class T4,class T5,class T6> void debug(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5,T6 e6){cout<<e1<<"\t"<<e2<<"\t"<<e3<<"\t"<<e4<<"\t"<<e5<<"\t"<<e6<<endl;}
template<class T> void debug(vector< vector<T> > e,long long row,long long col){long long i,j;REP(i,row) {REP(j,col) cout<<e[i][j]<<" ";cout<<endl;} cout<<endl;}
template<class T> void debug(vector< basic_string<T> > e,long long row,long long col){long long i,j;REP(i,row) {REP(j,col) cout<<e[i][j];cout<<endl;} cout<<endl;}
template<class T> void debug(T e[110][110],long long row,long long col){long long i,j;REP(i,row) {REP(j,col) cout<<e[i][j]<<" ";cout<<endl;}}
template<class T> string toString(T n){ostringstream oss;oss<<n;oss.flush();return oss.str();}
long long toint(string s){long long r=0;istringstream sin(s);sin>>r;return r;}
bool isVowel(char ch){ch=tolower(ch);if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')return true;return false;}
bool isUpper(char c){return c>='A' && c<='Z';}
bool isLower(char c){return c>='a' && c<='z';}
/***************************************************code starts from here*************************************************************************************************/



int main()
{
    int n,l;
    scanf("%d %d",&l,&n);
        char a[30],b[30];
        mem(a,0);
        mem(b,0);

        int i;
        map<string,string>M;

        fr(i,1,l)
        {
            //getchar();
            cin>>a>>b;
            //cout<<a<<" "<<b<<endl;
            M[a]=b;
            mem(a,0);
            mem(b,0);
        }
        int j;
        fr(j,1,n)
        {
            //cout<<i<<endl;
            cin>>a;
            //cout<<M[a]<<endl;

            if(M.find(a)!=M.end())
            {
                cout<<M[a]<<endl;
            }
            else
            {
                int len=strlen(a);
                len--;
                if(a[len]=='y')
                {
                    if(a[len-1]=='a'||a[len-1]=='e'||a[len-1]=='i'||a[len-1]=='o'||a[len-1]=='u')
                    {
                        fr(i,0,len)
                            cout<<a[i];
                        cout<<"s"<<endl;
                    }
                    else
                    {
                        fr(i,0,len-1)
                            cout<<a[i];
                        cout<<"ies"<<endl;
                    }
                }
                else if(a[len]=='o'||a[len]=='s'||a[len]=='x')
                {
                    cout<<a<<"es"<<endl;
                }
                else if(a[len]=='h' &&(a[len-1]=='c'||a[len-1]=='s'))
                {
                    cout<<a<<"es"<<endl;
                }
                else
                {
                    cout<<a<<"s"<<endl;
                }
            }
        }
    return 0;
}



