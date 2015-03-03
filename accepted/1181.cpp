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
#define SZ(s)       ((int)s.size())
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
#define all(a,b,c)  for(int I=0;I<b;I++)    a[I] = c
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
#define makeint(n,s)  istringstream(s)>>n
#define inpow(a,x,y) int i; a=x;fri(2,y)  a*=x
#define cntbit(mask) __builtin_popcountll(mask)
//0 based print
#define debug_array(a,n) for(int i=0;i<n;i++) cerr<<a[i]<<" "; cerr<<endl;
#define debug_matrix(mat,row,col) for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cerr<<mat[i][j]<<" ";cerr<<endl;}

#define csprnt printf("Case %d: ", ++cas);
#define mod         1000000007
#define eulerconstant 0.5772156649

template<class T1> void debug(T1 e){cout<<e<<endl;}
template<class T1,class T2> void debug(T1 e1,T2 e2){cout<<e1<<"\t"<<e2<<endl;}
template<class T1,class T2,class T3> void debug(T1 e1,T2 e2,T3 e3){cout<<e1<<"\t"<<e2<<"\t"<<e3<<endl;}
template<class T1,class T2,class T3,class T4> void debug(T1 e1,T2 e2,T3 e3,T4 e4){cout<<e1<<"\t"<<e2<<"\t"<<e3<<"\t"<<e4<<endl;}
template<class T1,class T2,class T3,class T4,class T5> void debug(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5){cout<<e1<<"\t"<<e2<<"\t"<<e3<<"\t"<<e4<<"\t"<<e5<<endl;}
template<class T1,class T2,class T3,class T4,class T5,class T6> void debug(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5,T6 e6){cout<<e1<<"\t"<<e2<<"\t"<<e3<<"\t"<<e4<<"\t"<<e5<<"\t"<<e6<<endl;}
template<class T> void debug(vector< vector<T> > e,int row,int col){int i,j;REP(i,row) {REP(j,col) cout<<e[i][j]<<" ";cout<<endl;} cout<<endl;}
template<class T> void debug(vector< basic_string<T> > e,int row,int col){int i,j;REP(i,row) {REP(j,col) cout<<e[i][j];cout<<endl;} cout<<endl;}
template<class T> void debug(T e[110][110],int row,int col){int i,j;REP(i,row) {REP(j,col) cout<<e[i][j]<<" ";cout<<endl;}}
template<class T> string toString(T n){ostringstream oss;oss<<n;oss.flush();return oss.str();}
int toInt(string s){int r=0;istringstream sin(s);sin>>r;return r;}
bool isVowel(char ch){ch=tolower(ch);if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')return true;return false;}
bool isUpper(char c){return c>='A' && c<='Z';}
bool isLower(char c){return c>='a' && c<='z';}
/***************************************************code starts from here*************************************************************************************************/

int top_face[9],bottom_face[9],right_face[9],left_face[9],front_face[9],back_face[9];

void move_cube(int dir)
{
    int i;
    if(dir==1)
    {
        int a=top_face[1];
        int b=top_face[2];
        fr(i,1,6)
        {
            top_face[i]=top_face[i+2];
        }
        top_face[7]=a;
        top_face[8]=b;

        int temp1,temp2,temp3;
        temp1=front_face[5];
        temp2=front_face[6];
        temp3=front_face[7];
        front_face[5]=left_face[5];
        front_face[6]=left_face[6];
        front_face[7]=left_face[7];
        left_face[5] = back_face[5];
        left_face[6]=back_face[6];
        left_face[7]=back_face[7];
        back_face[7]=right_face[1];
        back_face[6]=right_face[8];
        back_face[5]=right_face[7];
        right_face[7]=temp1;
        right_face[8]=temp2;
        right_face[1]=temp3;
    }
    else if(dir==-1)
    {
        int a=top_face[7];
        int b=top_face[8];
        frn(i,8,3)
        {
            top_face[i]=top_face[i-2];
        }
        top_face[1]=a;
        top_face[2]=b;

        int temp1,temp2,temp3;
        temp1=front_face[5];
        temp2=front_face[6];
        temp3=front_face[7];
        front_face[5]=right_face[7];
        front_face[6]=right_face[8];
        front_face[7]=right_face[1];
        right_face[7]=back_face[5];
        right_face[8]=back_face[6];
        right_face[1]=back_face[7];
        back_face[7]=left_face[7];
        back_face[6]=left_face[6];
        back_face[5]=left_face[5];
        left_face[5]=temp1;
        left_face[6]=temp2;
        left_face[7]=temp3;
    }
    else if(dir==2)
    {
        int a=bottom_face[1];
        int b=bottom_face[2];
        fr(i,1,6)
        {
            bottom_face[i]=bottom_face[i+2];
        }
        bottom_face[7]=a;
        bottom_face[8]=b;

        int temp1,temp2,temp3;
        temp1=front_face[1];
        temp2=front_face[2];
        temp3=front_face[3];
        front_face[1]=right_face[3];
        front_face[2]=right_face[4];
        front_face[3]=right_face[5];
        right_face[3]=back_face[1];
        right_face[4]=back_face[2];
        right_face[5]=back_face[3];
        back_face[1]=left_face[1];
        back_face[2]=left_face[2];
        back_face[3]=left_face[3];
        left_face[1]=temp1;
        left_face[2]=temp2;
        left_face[3]=temp3;
    }
    else if(dir==-2)
    {
        int a=bottom_face[7];
        int b=bottom_face[8];
        frn(i,8,3)
        {
            bottom_face[i]=bottom_face[i-2];
        }
        bottom_face[1]=a;
        bottom_face[2]=b;

        int temp1,temp2,temp3;
        temp1=front_face[1];
        temp2=front_face[2];
        temp3=front_face[3];
        front_face[1]=left_face[1];
        front_face[2]=left_face[2];
        front_face[3]=left_face[3];
        left_face[1] = back_face[1];
        left_face[2]=back_face[2];
        left_face[3]=back_face[3];
        back_face[1]=right_face[3];
        back_face[2]=right_face[4];
        back_face[3]=right_face[5];
        right_face[3]=temp1;
        right_face[4]=temp2;
        right_face[5]=temp3;
    }
    else if(dir==3)
    {
        int a=right_face[1];
        int b=right_face[2];
        fr(i,1,6)
        {
            right_face[i]=right_face[i+2];
        }
        right_face[7]=a;
        right_face[8]=b;

        int temp1,temp2,temp3;
        temp1=top_face[3];
        temp2=top_face[4];
        temp3=top_face[5];
        top_face[3]=back_face[3];
        top_face[4]=back_face[4];
        top_face[5]=back_face[5];
        back_face[3]=bottom_face[7];
        back_face[4]=bottom_face[8];
        back_face[5]=bottom_face[1];
        bottom_face[7]=front_face[7];
        bottom_face[8]=front_face[8];
        bottom_face[1]=front_face[1];
        front_face[7]=temp1;
        front_face[8]=temp2;
        front_face[1]=temp3;
    }
    else if(dir==-3)
    {
        int a=right_face[7];
        int b=right_face[8];
        frn(i,8,3)
        {
            right_face[i]=right_face[i-2];
        }
        right_face[1]=a;
        right_face[2]=b;
        int temp1,temp2,temp3;
        temp1=front_face[7];
        temp2=front_face[8];
        temp3=front_face[1];
        front_face[7]=bottom_face[7];
        front_face[8]=bottom_face[8];
        front_face[1]=bottom_face[1];
        bottom_face[7]=back_face[3];
        bottom_face[8]=back_face[4];
        bottom_face[1]=back_face[5];
        back_face[3]=top_face[3];
        back_face[4]=top_face[4];
        back_face[5]=top_face[5];
        top_face[3]=temp1;
        top_face[4]=temp2;
        top_face[5]=temp3;
    }
    else if(dir==4)
    {
        int a=left_face[1];
        int b=left_face[2];
        fr(i,1,6)
        {
            left_face[i]=left_face[i+2];
        }
        left_face[7]=a;
        left_face[8]=b;

        int temp1,temp2,temp3;
        temp1=top_face[7];
        temp2=top_face[8];
        temp3=top_face[1];
        top_face[7]=front_face[3];
        top_face[8]=front_face[4];
        top_face[1]=front_face[5];
        front_face[3]=bottom_face[3];
        front_face[4]=bottom_face[4];
        front_face[5]=bottom_face[5];
        bottom_face[3]=back_face[7];
        bottom_face[4]=back_face[8];
        bottom_face[5]=back_face[1];
        back_face[7]=temp1;
        back_face[8]=temp2;
        back_face[1]=temp3;
    }
    else if(dir==-4)
    {
        int a=left_face[7];
        int b=left_face[8];
        frn(i,8,3)
        {
            left_face[i]=left_face[i-2];
        }
        left_face[1]=a;
        left_face[2]=b;
        int temp1,temp2,temp3;
        temp1=top_face[7];
        temp2=top_face[8];
        temp3=top_face[1];
        top_face[7]=back_face[7];
        top_face[8]=back_face[8];
        top_face[1]=back_face[1];
        back_face[7]=bottom_face[3];
        back_face[8]=bottom_face[4];
        back_face[1]=bottom_face[5];
        bottom_face[3]=front_face[3];
        bottom_face[4]=front_face[4];
        bottom_face[5]=front_face[5];
        front_face[3]=temp1;
        front_face[4]=temp2;
        front_face[5]=temp3;
    }
    else if(dir==5)
    {
        int a=back_face[1];
        int b=back_face[2];
        fr(i,1,6)
        {
            back_face[i]=back_face[i+2];
        }
        back_face[7]=a;
        back_face[8]=b;

        int temp1,temp2,temp3;
        temp1=top_face[1];
        temp2=top_face[2];
        temp3=top_face[3];
        top_face[1]=left_face[3];
        top_face[2]=left_face[4];
        top_face[3]=left_face[5];
        left_face[3]=bottom_face[1];
        left_face[4]=bottom_face[2];
        left_face[5]=bottom_face[3];
        bottom_face[1]=right_face[1];
        bottom_face[2]=right_face[2];
        bottom_face[3]=right_face[3];
        right_face[1]=temp1;
        right_face[2]=temp2;
        right_face[3]=temp3;
    }
    else if(dir==-5)
    {
        int a=back_face[7];
        int b=back_face[8];
        frn(i,8,3)
        {
            back_face[i]=back_face[i-2];
        }
        back_face[1]=a;
        back_face[2]=b;

        int temp1,temp2,temp3;
        temp1=top_face[1];
        temp2=top_face[2];
        temp3=top_face[3];
        top_face[1]=right_face[1];
        top_face[2]=right_face[2];
        top_face[3]=right_face[3];
        right_face[1]=bottom_face[1];
        right_face[2]=bottom_face[2];
        right_face[3]=bottom_face[3];
        bottom_face[1]=left_face[3];
        bottom_face[2]=left_face[4];
        bottom_face[3]=left_face[5];
        left_face[3]=temp1;
        left_face[4]=temp2;
        left_face[5]=temp3;
    }
    else if(dir==6)
    {
        int a=front_face[1];
        int b=front_face[2];
        fr(i,1,6)
        {
            front_face[i]=front_face[i+2];
        }
        front_face[7]=a;
        front_face[8]=b;

        int temp1,temp2,temp3;
        temp1=top_face[5];
        temp2=top_face[6];
        temp3=top_face[7];
        top_face[5]=right_face[5];
        top_face[6]=right_face[6];
        top_face[7]=right_face[7];
        right_face[5]=bottom_face[5];
        right_face[6]=bottom_face[6];
        right_face[7]=bottom_face[7];
        bottom_face[5]=left_face[7];
        bottom_face[6]=left_face[8];
        bottom_face[7]=left_face[1];
        left_face[7]=temp1;
        left_face[8]=temp2;
        left_face[1]=temp3;
    }
    else if(dir==-6)
    {
        int a=front_face[7];
        int b=front_face[8];
        frn(i,8,3)
        {
            front_face[i]=front_face[i-2];
        }
        front_face[1]=a;
        front_face[2]=b;

        int temp1,temp2,temp3;
        temp1=top_face[5];
        temp2=top_face[6];
        temp3=top_face[7];
        top_face[5]=left_face[7];
        top_face[6]=left_face[8];
        top_face[7]=left_face[1];
        left_face[7]=bottom_face[5];
        left_face[8]=bottom_face[6];
        left_face[1]=bottom_face[7];
        bottom_face[5]=right_face[5];
        bottom_face[6]=right_face[6];
        bottom_face[7]=right_face[7];
        right_face[5]=temp1;
        right_face[6]=temp2;
        right_face[7]=temp3;
    }
    return ;
}

int main()
{
    int mv;
    int flag=1;
    while(scanf("%d",&mv)==1)
    {
        if(flag==0)
                cout<<endl;
        int i;
        mem(top_face,0);
        mem(bottom_face,0);
        mem(right_face,0);
        mem(left_face,0);
        mem(back_face,0);
        mem(front_face,0);
        fr(i,1,8)
        {
            top_face[i]=i;
            bottom_face[i]=8+i;
            right_face[i]=16+i;
            left_face[i]=24+i;
            back_face[i]=32+i;
            front_face[i]=40+i;
        }
        if(mv!=0)
        {
            move_cube(mv);
            while(scanf("%d",&mv)==1 && mv!=0)
            {
                move_cube(mv);
            }
        }

            fr(i,1,8)
            {
                if(top_face[i]<=9)
                    cout<<" ";
                cout<<top_face[i];
                if(i!=8)
                    cout<<" ";
            }
            cout<<endl;

            fr(i,1,8)
            {
                if(bottom_face[i]<=9)
                    cout<<" ";
                cout<<bottom_face[i];
                if(i!=8)
                    cout<<" ";
            }
            cout<<endl;

            fr(i,1,8)
            {

                if(right_face[i]<=9)
                    cout<<" ";
                cout<<right_face[i];
                if(i!=8)
                    cout<<" ";
            }
            cout<<endl;

            fr(i,1,8)
            {
                if(left_face[i]<=9)
                    cout<<" ";
                cout<<left_face[i];
                if(i!=8)
                    cout<<" ";
            }
            cout<<endl;

            fr(i,1,8)
            {
                if(back_face[i]<=9)
                    cout<<" ";
                cout<<back_face[i];
                if(i!=8)
                    cout<<" ";
            }
            cout<<endl;

            fr(i,1,8)
            {
                if(front_face[i]<=9)
                    cout<<" ";
                cout<<front_face[i];
                if(i!=8)
                    cout<<" ";
            }
            cout<<endl;
            flag=0;
    }
    return 0;
}
