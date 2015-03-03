#include<stdio.h>
#include<math.h>
int main()
{
    int c=1;
    float u,v,a,t,s;
    int n;
    while(scanf("%d",&n)==1&&n!=0)
    {
        if(n==1)
        {
            scanf("%f %f %f",&u,&v,&t);
            a=(v-u)/t;
            s=(u*t)+(.5*a*t*t);
            printf("Case %d: %.3f %.3f\n",c++,s,a);
        }
        else if(n==2)
        {
            scanf("%f %f %f",&u,&v,&a);
            t=(v-u)/a;
            s=(u*t)+(.5*a*t*t);
            printf("Case %d: %.3f %.3f\n",c++,s,t);
        }
        else if(n==3)
        {
            scanf("%f %f %f",&u,&a,&s);
            v=sqrt((u*u)+2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3f %.3f\n",c++,v,t);
        }
        else
        {
            scanf("%f %f %f",&v,&a,&s);
            u=sqrt((v*v)-2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3f %.3f\n",c++,u,t);
        }
    }
}
