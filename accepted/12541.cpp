#include <bits/stdc++.h>
using namespace std;

typedef struct birth{
    char name[16];
    int day;
}birth;

bool cmp(birth a,birth b)
{
    if(a.day>b.day)
        return true;
    return false;
}
int main()
{
    int n;
    int i;
    cin>>n;
    birth ob[102];
    for(i=1;i<=n;i++)
    {
        int dd,mm,yy;
        scanf("%s %d %d %d",ob[i].name,&dd,&mm,&yy);
        int temp=0;
        temp=dd;
        temp+=((mm==1)?(12*31):(mm-1)*31);
        temp+=((yy-1)*365);
        ob[i].day=temp;
    }
    sort(ob+1,ob+n+1,cmp);
    cout<<ob[1].name<<endl<<ob[n].name<<endl;
    return 0;
}

