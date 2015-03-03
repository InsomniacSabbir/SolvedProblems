#include<stdio.h>
#include<math.h>
#include<string.h>
#include<string>
#include<map>
#include<vector>
#include<set>
#include<iostream>
#include<algorithm>
using namespace std;
set<string>S;
map<string , int>M;
map<string  , int>::iterator it;
int main()
{
    M.clear();
    int tCase,nCase,i,j,k;
    char arr[10000];
    char name[1000];
    while(scanf("%d",&tCase)==1)
    {
        M.clear();
        for(nCase=1;nCase<=tCase;nCase++)

    {
        scanf("%s",&arr);
        gets(name);
        M[arr]++;
        S.insert(arr);
    }
    for(it=M.begin();it!=M.end();it++)
        {
            printf("%s %d\n", (it -> first).c_str(), it -> second);
        }
    }
    return 0;
}
