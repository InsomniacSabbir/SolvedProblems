#include<stdio.h>
int main()
{
    int a,b,c,q,n,lucho,lady[60000],tall,shortt;
    while(scanf("%d",&n)!=EOF)
    {
        for(a=0;a<n;a++)
        {
            scanf("%d",&lady[a]);
        }
        scanf("%d",&q);
        for(b=0;b<q;b++)
        {
            scanf("%d",&lucho);
            tall=0;
            for(c=0;c<n;c++)
            {
                if(lucho>lady[c])
                {
                    tall=lady[c];
                }
                else break;
            }
            if(tall==0){printf("X ");}
            else printf("%d ",tall);
            shortt=0;
            for(c=n-1;c>=0;c--)
            {
                if(lucho<lady[c])
                {
                    shortt=lady[c];
                }
                else break;
            }
            if(shortt==0){printf("X\n");}
            else printf("%d\n",shortt);
        }
    }
}
