#include<stdio.h>
#include<string.h>

typedef struct slogan
{

 char first[500],second[500];

} slogan;


int main()
{
    int a,b,n,q;
    char slogan[500];
    struct slogan obj[110],test[110];

    while(scanf("%d",&n)!=EOF)
    {
        getchar();

        for(a=1;a<=n;a++)
        {
            gets(obj[a].first);
            gets(obj[a].second);
        }

        scanf("%d",&q);

        getchar();

        for(b=1;b<=q;b++)
        {
            gets(test[b].first);

            for(a=1;a<=n;a++)
            {
                if(strcmp(test[b].first , obj[a].first)==0)
                {
                    printf("%s\n",obj[a].second);
                }
                else{}
            }
        }
    }

    return 0;
}
