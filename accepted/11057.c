#include<stdio.h>
int abso(int a,int b)
{
    if(a>b){return a-b;}
    else{return b-a;}
}
int main()
{
    int b,a,c,i,j,m,arr[100000],min=999999999,mini,minj,dif;
    while(scanf("%d",&b)!=EOF)
    {
        min=999999999;
        for(a=0;a<b;a++)
        {
            scanf("%d",&arr[a]);
        }
        scanf("%d",&m);
        for(i=0;i<b-1;i++)
        {
            for(j=i+1;j<b;j++)
            {
                if(arr[i]+arr[j]==m)
                {
                    dif=abso(arr[i],arr[j]);
                    if(dif<min)
                    {
                        min=dif;
                        mini=arr[i];
                        minj=arr[j];
                    }
                }
            }
        }
        if(mini>minj)
        {
            c=minj;
            minj=mini;
            mini=c;
        }
        else{}
        printf("Peter should buy books whose prices are %d and %d.\n\n",mini,minj);

    }

}
