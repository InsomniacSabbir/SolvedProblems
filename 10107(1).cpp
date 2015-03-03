#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,str[10000],c=1,i,j,a,d,ans;
    while(scanf("%lld",&str[c])!=EOF)
    {
        if(c==1){printf("%lld\n",str[c]);}
        else if(c==2){printf("%lld\n",(str[c]+str[c-1])/2);}
        else
        {
            sort(str+1 , str+c+1);
            if(c%2==0){ans=(str[c/2]+str[(c/2)+1])/2;}
            else{ans=str[(c+1)/2];}
            printf("%lld\n",ans);
        }
        c++;
    }
    return 0;
}

