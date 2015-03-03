#include<stdio.h>
#include<map>
#include<string>
#include<math.h>
using namespace std;

typedef struct asda
{
    char arr[1000];

}asda;

int main()
{
    asda name[100];
    map<string , int> m;
    char str[100],giv[100];
    int N,i,j,temp,k,d,c,flag=0;
    while(scanf("%d",&N)==1)
    {
        for(i=1;i<=N;i++)
        {
            scanf("%s",&name[i].arr);
            m[name[i].arr]=0;
        }
        for(i=1;i<=N;i++)
        {
            c=0;d=0;
            scanf("%s",&giv);
            scanf("%d",&temp);
            scanf("%d",&k);
            if(k!=0)
            {
                 m[giv]=m[giv]-temp;
                d=temp/k;
                //printf("d=%d\n",d);
                c=temp-(d*k);
                //printf("c=%d\n",c);
                m[giv]=m[giv]+c;
            }
            for(j=1;j<=k;j++)
            {
                scanf("%s",&str);
                m[str]=m[str]+d;
            }
        }
        if(flag==1)
            printf("\n");
        flag=1;
        for(i=1;i<=N;i++)
        {
            printf("%s %d\n",name[i].arr,m[name[i].arr]);
        }


    }
    return 0;
}
