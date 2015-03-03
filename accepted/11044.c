#include<stdio.h>
#include<math.h>

int main()
{
    int T,a,b,sonr,sonc,d;
    double r,c;
    scanf("%d",&T);
    for(a=1;a<=T;a++)
    {
        scanf("%lf %lf",&r,&c);
        r=r-2;c=c-2;
        if(r<=3&&c<=3){d=1;}
        else
        {
            sonr=(ceil)(r/3);
        sonc=(ceil)(c/3);
        d=sonr*sonc;
        }
        printf("%d\n",d);
    }
}
