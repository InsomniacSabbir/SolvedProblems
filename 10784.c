#include<stdio.h>
#include<math.h>
int main()
{
unsigned long long d,a,c=0,ans;
int count=1;
while(c!=1)
{
scanf("%llu",&d);
if(d==0){c=1;}
else
{
ans=ceil((sqrt(8*d+9)+3)/2);
printf("Case %d: %llu\n",count,ans);
}

count++;
}
return 0;
}
