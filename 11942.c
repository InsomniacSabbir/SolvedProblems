#include<stdio.h>
#include<string.h>
int main()
{
    int T,a,b,c,d,L[11],count=0,dcount=0,i,j;
    scanf("%d",&T);
    printf("Lumberjacks:\n");
    for(b=1;b<=T;b++)
    {
        count=0;
        for(a=0;a<10;a++)
        {
            scanf("%d",&L[a]);
        }
        for(i=0;i<a-1;i++)
        {
            if(L[0]>L[9])
            {
                if(L[i]<L[i+1]){count++;}
            }
            else if(L[0]<L[9])
            {
                if(L[i]>L[i+1]){count++;}
            }
        }
        if(count==0){printf("Ordered\n");}
        else if(count!=0){printf("Unordered\n");}


        }

}
