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


typedef struct team
{
    int team_num;
    int total_time;
    int tried_before[20];
    int solved[20];
    int totalSolved;
}team;

team ob[110];
void init()
{
    int i;
    fr(i,1,100)
    {
        ob[i].total_time=0;
        ob[i].totalSolved=0;
        mem(ob[i].tried_before,0);
        mem(ob[i].solved,0);
    }
}

int main()
{
    team temp;
    int tCase,nCase,num,probNum,time,i,j,totalTeam,taken[110];
    char verdict;
    char str[100];
    scanf("%d",&tCase);
    getchar();
    getchar();
    fr(nCase,1,tCase)
    {
        //puts("");
        mem(str,0);
        init();
        totalTeam=0;
        mem(taken,0);
        while(gets(str)!=NULL &&str[0]!='\0')
        {
            sscanf(str,"%d %d %d %c",&num,&probNum,&time,&verdict);
            //printf("%d %d %d %c\n",num,probNum,time,verdict);
            if(taken[num]==0)
            {
                totalTeam++;
                taken[num]=totalTeam;
                ob[totalTeam].team_num=num;
                if(verdict=='I'&&ob[totalTeam].solved[probNum]==0)
                {
                    ob[totalTeam].tried_before[probNum]++;
                }
                else if(verdict=='C'&&ob[totalTeam].solved[probNum]==0)
                {
                    ob[totalTeam].solved[probNum]=1;
                    ob[totalTeam].total_time=time;
                    ob[totalTeam].totalSolved++;
                }
            }
            else
            {
                if(verdict=='I'&&ob[taken[num]].solved[probNum]==0)
                {
                    ob[taken[num]].tried_before[probNum]++;
                }
                else if(verdict=='C'&&ob[taken[num]].solved[probNum]==0)
                {
                    ob[taken[num]].solved[probNum]=1;
                    ob[taken[num]].total_time+=time+(ob[taken[num]].tried_before[probNum]*20);
                    ob[taken[num]].totalSolved++;
                }
            }

            mem(str,0);

        }
        fr(i,1,totalTeam-1)
        {
            fr(j,i+1,totalTeam)
            {
                if(ob[i].totalSolved<ob[j].totalSolved)
                {
                    temp=ob[i];
                    ob[i]=ob[j];
                    ob[j]=temp;
                }
                else if(ob[i].totalSolved==ob[j].totalSolved)
                {
                    if(ob[i].total_time>ob[j].total_time)
                    {
                        temp=ob[i];
                        ob[i]=ob[j];
                        ob[j]=temp;
                    }
                    else if(ob[i].total_time==ob[j].total_time)
                    {
                        if(ob[i].team_num>ob[j].team_num)
                        {
                            temp=ob[i];
                            ob[i]=ob[j];
                            ob[j]=temp;
                        }
                    }
                }
            }

        }
        fr(i,1,totalTeam)
        {
            cout<<ob[i].team_num<<" "<<ob[i].totalSolved<<" "<<ob[i].total_time<<endl;
        }
        if(tCase!=nCase)
        printf("\n");
    }
    return 0;
}
