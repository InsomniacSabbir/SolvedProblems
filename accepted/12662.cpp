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
    string fname,lname;
    fname="sabbir";
    lname="alam";
    fname+=" ";
    fname+=lname;
    //cout<<fname<<endl;

    int q,query;
    char givenstring[1000];
    int n,i,counter;
    int m=0;
    int x;
    int j,check;
    int givenStrLen;
    int arr[1000],revarr[1000];
    map<int,string>M;
    int flag,rflag;
    int totalChar;
    vector<char>V[1000];
    string charArr[1000];
    string mapKey;
    int t;
    int countChar;
    //variables

    M.clear();
    fr(i,0,999)
    {
        V[i].clear();
        charArr[i].clear();
    }

    countChar=0;
    flag=0;
    rflag=1;
    counter=1;
    x=0;
    totalChar=0;

    scanf("%d",&n);
    getchar();
    gets(givenstring);
    //taking input

    givenStrLen=strlen(givenstring);
    //printf("givenStrlen=%d\n",givenStrLen);//debugging
    //processing the given strng
    fr(i,0,givenStrLen-1)
    {
        j=i;
        check=1;
        while(check)
        {
            if(givenstring[j]!='?' && givenstring[j]!=' ')
            {
                V[x].pb(givenstring[j]);
                j++;
            }
            else if(givenstring[j]=='?')
            {
                V[x].pb(givenstring[j]);
                j++;
            }
            else
            {
                check=0;
                x++;
                break;
            }
            if(j==givenStrLen)
            {
                check=0;
                //if(givenstring[j-1]!='?')
                x++;
            }
        }

        //printf("%d.finished the while loop\n",x);//debugging

        i=j;
        if(V[x-1][0]=='?')
        {
            arr[x-1]=counter;
            counter++;
            //m++;
        }
        else
        {
            totalChar++;
            fr(t,0,V[x-1].size()-1)
            {
                charArr[totalChar-1].pb(V[x-1][t]);
                //cout<<totalChar-1<<"."<<"charArr["<<totalChar-1<<"]["<<t<<"]--->"<<charArr[totalChar-1][t]<<"     "<<"V["<<x-1<<"]["<<t<<"]"<<V[x-1][t]<<endl;
            }

            counter=1;
            arr[x-1]=counter;
            //m++;
        }
    }

    //printf("Finished the for loop\n");//debugging

    counter=1;
    m=0;

    //reverse travarse the given string
    frn(i,x-1,0)
    {
        if(V[i][0]=='?')
        {
            revarr[i]=counter;
            counter++;
            //m++;
        }
        else
        {
            counter=1;
            revarr[i]=counter;
            m++;
        }
    }
    //printf("%d\n",totalChar); //debugging
    //fr(i,0,n-1)
    //{
    //    cout<<arr[i]<<"---"<<revarr[i]<<endl;
    //}
    m=0;
    fr(i,0,n-1)
    {
        mapKey="";
        if(flag==0 && V[i][0]=='?')
        {
            fr(j,1,revarr[i])
            {
                mapKey+="left of ";
            }
            mapKey+=charArr[m];
            //cout<<mapKey<<endl;
            M[i+1]=mapKey;
        }
        else if(flag==1 && rflag==1 && V[i][0]=='?')
        {
            if(arr[i]<revarr[i])
            {
                fr(j,1,arr[i])
                {
                    mapKey.append("right of ");
                }
                mapKey.append(charArr[m-1]);
                M[i+1]=mapKey;
                //cout<<mapKey<<endl;
            }
            else if(arr[i]>revarr[i])
            {
                fr(j,1,revarr[i])
                {
                    mapKey.append("left of ");
                }
                mapKey.append(charArr[m]);
                //cout<<mapKey<<endl;
                M[i+1]=mapKey;
            }
            else if(arr[i]==revarr[i])
            {
                mapKey.append("middle of ");
                mapKey.append(charArr[m-1]);
                mapKey.append(" and ");
                mapKey.append(charArr[m]);
                //cout<<mapKey<<endl;
                M[i+1]=mapKey;
            }
        }
        else if(flag==1 && rflag==0 && V[i][0]=='?')
        {
            fr(j,1,arr[i])
            {
                mapKey.append("right of ");
            }
            mapKey.append(charArr[m-1]);
            //cout<<mapKey<<endl;
            M[i+1]=mapKey;
        }
        else if(V[i][0]!='?')
        {
            m++;
            if(totalChar)
            {
                flag=1;
            }
            totalChar--;
            if(totalChar==0)
            {
                rflag=0;
            }
            M[i+1]=charArr[m-1];
            //cout<<charArr[m-1]<<endl;
        }
    }
    //fr(i,1,n)
    //{
    //    cout<<i<<"<--->"<<M[i]<<endl;
    //}

    scanf("%d",&q);
    fr(i,1,q)
    {
        scanf("%d",&query);
        cout<<M[query]<<endl;
    }
	return 0;
}
