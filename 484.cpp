#include<stdio.h>
#include<math.h>
#include<string.h>
#include<map>
#include<vector>
using namespace std;

vector<int >V;
map<int,int>M;
map<int,int>Res;
int main()
{
    int i,j,k,n;
    while(scanf("%d",&n)!=EOF)
    {
        if(M[n]==0)
        {
            V.push_back(n);
            M[n]=1;
        }
        Res[n]++;

    }
      for(i=0;i<Res.size();i++)
        {
            printf("%d %d\n",V[i],Res[V[i]]);
        }
    return 0;
}
