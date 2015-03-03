#include<stdio.h>
int main()
{
    int a,n,b,c,d,sum=0,temp;
    char str[100];
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        scanf("%s",&str);
        if(str[0]=='d')
        {
            scanf("%d",&temp);
            sum=temp+sum;
        }
        else if(str[0]=='r')
        {
            printf("%d\n",sum);
        }
    }
}
