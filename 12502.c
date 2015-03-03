#include<stdio.h>
int main()
{
    int T,x,y,z,i,m;


    scanf("%d",&T);
    for(i=1;i<=T;i++)

    {

        scanf("%d %d %d",&x,&y,&z);

        if( x>=1 && y<=10 && z>=1 && z<=1000)

        {


        m=z*(2*x-y)/(x+y);

        printf("%d\n",m);}

    }

    return 0;
}
