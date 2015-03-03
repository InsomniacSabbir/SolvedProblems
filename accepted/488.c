#include<stdio.h>
int main()
{
    int a,b,c,d,T,n,i,j;
    scanf("%d",&T);
    for(d=1;d<=T;d++)
    {

        scanf("%d%d",&a,&n);
        for(c=1;c<=n;c++)
        {
            for(i=1;i<=a;i++)
            {
                for(j=1;j<=i;j++)
                {
                    printf("%d",i);
                }
                printf("\n");
            }
            for(i=a-1;i>=1;i--)
            {
                for(j=1;j<=i;j++)
                {
                    printf("%d",i);
                }
                printf("\n");

            }
            if(d!=T||c!=n){printf("\n");}


        }
    }
    return 0;
}
