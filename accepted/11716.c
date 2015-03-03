#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{

    int a,b,c,n,T,d,e,f;
    char str[10009],mat[101][101];
    scanf("%d",&T);
    getchar();
    for(a=1;a<=T;a++)
    {
        gets(str);
        d=0;
        e=strlen(str);
        f=sqrt(e);

        if((f*f)!=e)
        {
            printf("INVALID\n");
        }
        else
        {
            for(b=0;b<f;b++)
            {
                for(c=0;c<f;c++)
                {
                    mat[b][c]=str[d];
                    d++;
                }
            }
            for(b=0;b<f;b++)
            {
                for(c=0;c<f;c++)
                {
                    printf("%c",mat[c][b]);
                }
            }
            printf("\n");

        }
    }
}


