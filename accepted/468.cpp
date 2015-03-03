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

typedef struct data
{
    int freq;
    char value;
}data;


int main()
{
    //freopen ("in.txt","r",stdin);
    //freopen ("out.txt","w",stdout);
    int tCase,nCase;
    cin>>tCase;
    //cout<<tCase;
    getchar();
    int flag=0;
    //cout<<endl;
    fr(nCase,1,tCase)
    {
        getchar();
        char A[10009],B[10009];
        mem(A,0);
        mem(B,0);
        gets(A);
        //getchar();
        gets(B);
        //cout<<A<<" "<<B<<endl;
        //cout<<endl;
        data en[60],de[60];
        int i;
        fr(i,1,55)
        {
            en[i].value='\0';
            de[i].value='\0';
            en[i].freq=0;
            de[i].freq=0;

        }

        int lenA=strlen(A);
        int lenB=strlen(B);
        lenA--;
        lenB--;
        int val;
        //priority_queue<data>enQ,deQ;
        fr(i,0,lenA)
        {
            if(A[i]>='A' && A[i]<='Z')
            {
                val=A[i]-'A'+1;
            }
            else if(A[i]>='a' && A[i]<='z')
            {
                val=A[i]-'a'+27;
            }
            en[val].value=A[i];
            en[val].freq++;
        }
        fr(i,0,lenB)
        {
            if(B[i]>='A' && B[i]<='Z')
            {
                val=B[i]-'A'+1;
            }
            else if(B[i]>='a' && B[i]<='z')
            {
                val=B[i]-'a'+27;
            }
            de[val].value=B[i];
            de[val].freq++;
        }
        int j;
        fr(i,1,51)
        {
            fr(j,i+1,52)
            {
                if(en[i].freq<en[j].freq)
                {
                    data temp;
                    temp=en[i];
                    en[i]=en[j];
                    en[j]=temp;
                }
            }
        }

        fr(i,1,51)
        {
            fr(j,i+1,52)
            {
                if(de[i].freq<de[j].freq)
                {
                    data temp;
                    temp=de[i];
                    de[i]=de[j];
                    de[j]=temp;
                }
            }
        }

        /*fr(i,1,52)
        {
            cout<<"en[i]= "<<en[i].value<<" Freq = "<<en[i].freq<<endl;
        }
        cout<<endl<<"..................De starts here.............."<<endl;

        fr(i,1,52)
        {
            cout<<"de[i]= "<<de[i].value<<" Freq = "<<de[i].freq<<endl;
        }*/

        map<char,char>M;
        i=1;
        while(en[i].freq>0)
        {
            M[de[i].value]=en[i].value;
            i++;
        }

        fr(i,0,lenB)
        {
            printf("%c",M[B[i]]);
        }
        cout<<endl;
        flag=1;
        if(nCase!=tCase)
            cout<<endl;
    }
    return 0;
}
