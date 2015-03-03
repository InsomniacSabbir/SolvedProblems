#include<stdio.h>
#include<algorithm>
using namespace std;
int arr[2000003];
int main()
{
    int n,c,i,j,a,e=1;
    while(e!=0)
    {
        scanf("%d",&n);
        if(n==0){e=0;}
        else
        {
            for(a=1;a<=n;a++)
        {
            scanf("%d",&arr[a]);
        }
        sort(arr+1 , arr+n+1);
        for(a=1;a<=n;a++)
        {
            printf("%d",arr[a]);
            if(a!=n){printf(" ");}
        }
        printf("\n");
        }
    }
    return 0;
}
