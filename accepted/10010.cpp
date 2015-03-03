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
        int M,N,ansr,ansc,i,j,trial;
        scanf("%d %d",&M,&N);

        char str[M+1][N+1];

        fr(i,1,M)
        {
            scanf("%s",str[i]);
            frn(j,N-1,0)
            {
                if(str[i][j]>='A'&&str[i][j]<='Z')
                {
                    str[i][j]=str[i][j]+('a'-'A');
                }
                str[i][j+1]=str[i][j];
            }
            //str[i][0]=0;
        }

        scanf("%d",&trial);
        fr(i,1,trial)
        {
            char arr[N+M];
            scanf("%s",arr);
            fr(j,0,strlen(arr)-1)
            {
                if(arr[j]>='A'&&arr[j]<='Z')
                {
                    arr[j]=arr[j]+('a'-'A');
                }
            }


            int map_sign[2][8];
            map_sign[0][0]=0;
            map_sign[1][0]=-1;
            map_sign[0][1]=-1;
            map_sign[1][1]=-1;
            map_sign[0][2]=-1;
            map_sign[1][2]=0;
            map_sign[0][3]=-1;
            map_sign[1][3]=1;
            map_sign[0][4]=0;
            map_sign[1][4]=1;
            map_sign[0][5]=1;
            map_sign[1][5]=1;
            map_sign[0][6]=1;
            map_sign[1][6]=0;
            map_sign[0][7]=1;
            map_sign[1][7]=-1;
            int row=0,col=0;
            //int field[M+1][N+1];
            //mem(field,0);
            int flag=0;
            fr(row,1,M)
            {
                fr(col,1,N)
                {
                    if(str[row][col]==arr[0])
                    {
                        int inflag=0,count=0;
                        int tr,tc;
                        while(flag==0 && count<=7)
                        {
                            tr=row;
                            tc=col;
                            inflag=0;
                            int x=1;
                            while(inflag==0)
                            {
                                if(tr+map_sign[0][count]<=M && tr+map_sign[0][count]>=1&&tc+map_sign[1][count]<=N &&tc+map_sign[1][count]>=1)
                                {
                                    tr=tr+map_sign[0][count];
                                    tc=tc+map_sign[1][count];
                                }
                                if(str[tr][tc]==arr[x])
                                {
                                    x++;
                                }
                                else
                                {
                                    inflag=1;
                                }
                                if(x==strlen(arr))
                                {
                                    inflag=1;
                                }
                            }
                            if(x==strlen(arr))
                            {
                                ansr=row;
                                ansc=col;
                                flag=1;
                            }
                            count++;
                        }
                        if(flag==1)
                        {
                            row+=M;
                            col+=N;
                        }
                    }
                }
            }

            printf("%d %d\n",ansr,ansc);
        }
        if(n!=t)
            printf("\n");

    }
    return 0;
}

