#include<stdio.h>
int main()
{
    int N,a,b[40],c;
    for(;N!=-1;)
    {
        scanf("%d",&N);
        if(N>=0)
        {
            if(N==0){printf("0\n");}
            else
            {
            for(a=0;N!=0;a++)
            {
                b[a]=N%3;
                N=N/3;
            }
            for(c=a-1;c>=0;c--)
            {
                printf("%d",b[c]);
            }
            printf("\n");
            }
        }
        else{N=-1;break;}
    }
}
