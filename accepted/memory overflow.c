#include<stdio.h>
#include<string.h>
int main()
{
    int n,k,T,X,b,c,d,e,i;
    char name[600];
    scanf("%d",&T);
    for(X=1;X<=T;X++)
    {
        int Y=0;
        scanf("%d %d %s",&n,&k,&name);
       for(c=1;c<n;c++)
       {
           for(e=c-1,d=1;d<=k;d++,e--)
           {
               if(name[e]==name[c]){Y++;break;}
               if(e<0){break;}
           }
       }
       printf("Case %d: %d\n",X,Y);
    }
    return 0;
}
