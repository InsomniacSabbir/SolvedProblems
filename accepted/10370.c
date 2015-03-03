#include<stdio.h>
int main()
{
    int c,a,n,std[1005],b;
    float avg,ans;
    char ch='%';
    scanf("%d",&c);
    for(a=1;a<=c;a++)
    {
        int sum=0,count=0;
        scanf("%d",&n);
        for(b=1;b<=n;b++)
        {
            scanf("%d",&std[b]);
            sum=sum+std[b];
        }
        avg=((float)(sum)/(float)(n));
        for(b=1;b<=n;b++)
        {
            if(std[b]>avg){count++;}
        }
        ans=(((float)(count)*100.000)/(float)(n));
        printf("%.3f%c\n",ans,ch);
    }
    return 0;
}
