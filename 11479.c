#include<stdio.h>
int main()
{
    long long int x,y,z,T,a,i,j,c,b;
    scanf("%lld",&T);
    for(a=1;a<=T;a++)
    {

        scanf("%lld%lld%lld",&x,&y,&z);

        if(x+y>z&&x+z>y&&y+z>x)
        {
        if(x==y&&y==z){printf("Case %lld: Equilateral\n",a);}
        else if(x==y||y==z||z==x){printf("Case %lld: Isosceles\n",a);}
        else{printf("Case %lld: Scalene\n",a);}
        }
        else{printf("Case %lld: Invalid\n",a);}
    }
}
