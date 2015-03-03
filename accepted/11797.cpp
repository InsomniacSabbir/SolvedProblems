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


typedef struct Drutojan{

    string name;
    LL time_single=0;
    queue<string>Q;
}Drutojan;

map<string,LL>M;


int main()
{
    M["Ja"]=0;
    M["Sam"]=1;
    M["Sha"]=2;
    M["Sid"]=3;
    M["Tan"]=4;




    LL tCase,nCase,a,b,temp,timePerPerson,totalTime,numOfPerson,lst,c,single;
    string person,user;
    scanf("%lld",&tCase);
    fr(nCase,1,tCase)
    {
        Drutojan passanger[6];
        passanger[0].name="Ja";
        passanger[1].name="Sam";
        passanger[2].name="Sha";
        passanger[3].name="Sid";
        passanger[4].name="Tan";
        cin>>timePerPerson>>totalTime>>person;
        temp=0;
        fr(b,0,4)
        {
            cin>>lst;
            fr(c,1,lst)
            {
                cin>>user;
                passanger[b].Q.push(user);
            }
        }
        bool flag=true;
        while(flag)
        {
            single=M[person];
            passanger[single].time_single+=timePerPerson;
            person=passanger[single].Q.front();
            passanger[single].Q.pop();
            passanger[single].Q.push(person);
            temp+=(timePerPerson+2);
            if(temp==totalTime)
            {
                flag=false;
            }
            else if(temp>totalTime)
            {
                //passanger[single].time_single-=2;
                temp-=2;
                if(temp>totalTime)
                {

                    temp=temp-totalTime;

                    passanger[single].time_single-=timePerPerson;
                    timePerPerson-=temp;
                    passanger[single].time_single+=timePerPerson;


                }
                flag=false;

            }
        }

        cout<<"Case "<<nCase<<":"<<endl;
        fr(a,0,4)
        {
            cout<<passanger[a].name<<" "<<passanger[a].time_single<<endl;
        }
    }

    return 0;
}
