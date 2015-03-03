#include<stdio.h>
int min(int a,int b)
{
    if(a>b){return b;}
    else return a;
}
int main()
{
    int a=1,b=1,c=1,d,e,f,n;
    long int U[1510];
    long int g,h,i;
    U[1]=1;
    for(e=1;e<=1500;e++)
    {
        g=2*U[a];
        h=3*U[b];
        i=5*U[c];
        U[e+1]=min(g,min(h,i));
        if(U[e+1]==g){a++;}
        if(U[e+1]==h){b++;}
        if(U[e+1]==i){c++;}
    }
    printf("The 1500'th ugly number is %ld.\n",U[1500]);
}
