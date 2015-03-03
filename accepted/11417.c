#include<stdio.h>
int GCD(int b,int a)
{
if(a == 0)
return b;
return GCD(a,b%a);
}
int main()
{
    int i,j,N,a,b,x;
    while(scanf("%d",&N)==1&&N!=0)
    {
        int G=0;
        for(i=1;i<N;i++)
        {
            for(j=i+1;j<=N;j++)
            {
                G+=GCD(i,j);
            }
        }
        printf("%d\n",G);
    }
    return 0;

}
