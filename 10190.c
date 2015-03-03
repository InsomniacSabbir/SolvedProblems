#include<stdio.h>
int main()
{
    int n,m,c=0,d,arr[100],flag,e;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        long long int temp=n;
        if(m<=1||n<=1){printf("Boring!\n");}
        else
        {
            for(d=0;n!=1;d++)
            {
                arr[d]=n/m;
                c=n%m;
                n=n/m;
                if(c!=0){flag=0;break;}
                else{flag=1;continue;}
            }
            if(flag==0){printf("Boring!\n");}
            else
            {
                printf("%d",temp);
                for(e=0;e<=d-2;e++)
                {
                    printf(" %d",arr[e]);
                }
                printf(" 1\n");
            }

        }
    }
    return 0;
}
