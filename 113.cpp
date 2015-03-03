#include<stdio.h>
#include<math.h>
int main()
{

    double x,n,p,res;;
    while(scanf("%lf",&n)!=EOF)
    {
        scanf("%lf",&p);
        x=1/n;
        res=pow(p,x);
        printf("%.0lf\n",res);
    }
    return 0;
}
