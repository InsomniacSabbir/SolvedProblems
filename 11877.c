#include<stdio.h>
int main()
{
    int b=0,d,n,a,ans=0;
    for(;b!=-1;)
    {
        scanf("%d",&n);
        ans=0;
        if(n>0)
        {
        for(;n>1;)
      {
          if(n==2){ans++;n--;}
          else
          {
          d=n/3;
          n=(n%3)+(n/3);
          ans=ans+d;
          }
      }
      printf("%d\n",ans);
    }
        else{b=-1;}
    }
    return 0;
}
