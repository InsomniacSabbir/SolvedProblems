#include<stdio.h>
#include<string.h>
int main()
{
    int a,T,i,j,tempvalue=0,k,n;
    char str[100],tempch;
    scanf("%d",&T);
    for(a=1;a<=T;a++)
    {
        scanf("%s",&str);
        n=strlen(str);
        printf("Case %d: ",a);
        for(j=0;j<n;j++)
        {
            tempch=str[j];
            for(k=j+1;k<n;k++)
            {
                if(str[k]<='9'&&str[k]>='0')
                {
                    tempvalue=(tempvalue*10)+(str[k]-48);
                    j=k;
                }
                else{k=n;}
            }
            for(i=0;i<tempvalue;i++)
            {
                printf("%c",tempch);
            }

            tempvalue=0;
        }
        printf("\n");
    }
    return 0;
}

