#include<stdio.h>
#include<math.h>
int main()
{
    int T,a,ans;
    double tax,k;
    scanf("%d",&T);
    for(a=1;a<=T;a++)
    {
        tax=0;
        scanf("%lf",&k);
        if(k<=180000)
        {
            tax=0;

        }
        else if(k>180000&&k<=480000)
        {
            tax=((k-180000)*0.1);
            if(tax<=1999.00)
            {
                tax=2000.00;


            }
        }
        else if(k>480000&&k<=880000)
        {
            tax=((k-480000)*0.15);
            tax=tax+30000.00;
        }
        else if(k>880000&&k<=1180000)
        {
             tax=((k-880000)*0.2);
            tax=tax+30000+60000;
        }
        else if(k>1180000)
        {
             tax=((k-1180000)*0.25);
            tax=tax+30000+60000+60000;

        }
        ans=(ceil(tax));
        printf("Case %d: %d\n",a,ans);
    }
    return 0;
}
