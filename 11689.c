#include<stdio.h>
int main()
{
    int e,f,c,ans=0,d,t,a;
    scanf("%d",&t);
    for(a=1;a<=t;a++)
    {
      scanf("%d%d%d",&e,&f,&c);
      if(e<1000&&f<1000&&c>1&&c<2000)
      {
      e=e+f;
      ans=0;
      for(;e>c-1;)
      {
          d=e/c;
          e=(e%c)+(e/c);
          ans=ans+d;
      }
      printf("%d\n",ans);
      }

    }

}
