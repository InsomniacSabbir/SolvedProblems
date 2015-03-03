#include<stdio.h>
int main()
{
  int n,rem,res,bottle;
  while(scanf("%d",&n)!=EOF)
  {
      res=1;
      int temp=n;
      bottle=n;
      for(;res!=0;)
      {
          rem=temp%3;
          res=temp/3;
          temp=res+rem;
          bottle=bottle+res;
      }
      if(rem==2){bottle++;}
      else{}
      printf("%d\n",bottle);
  }
}
