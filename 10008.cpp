#include<stdio.h>
#include<string.h>
typedef struct x
{
    int lenth;
    char str[10000];
}x;

int main()
{

    int alph[200];
    char position[260],temp,let[200];
    int n,i,j,h,l,k,g,a;
    x ob[100];

    while(scanf("%d",&n)!=EOF)
    {
        memset(alph,0,sizeof(alph));
        getchar();
    for(i=1;i<=n;i++)
    {
        gets(ob[i].str);

        ob[i].lenth=strlen(ob[i].str);

        for(j=0;j<ob[i].lenth;j++)
        {
            if(ob[i].str[j]>='A'&&ob[i].str[j]<='Z')
            {
                alph[ob[i].str[j]-64]++;
                let[ob[i].str[j]-64]=ob[i].str[j];

            }
            else if(ob[i].str[j]>='a'&&ob[i].str[j]<='z')
            {
                alph[ob[i].str[j]-32-64]++;
                let[ob[i].str[j]-32-64]=ob[i].str[j]-32;

            }
        }
    }
    for(k=1;k<26;k++)
    {
        for(l=k+1;l<=26;l++)
        {
            if(alph[k]<alph[l])
            {
                temp=alph[k];
                alph[k]=alph[l];
                alph[l]=temp;
                temp=let[k];
                let[k]=let[l];
                let[l]=temp;


            }
            if((alph[k]==alph[l])&&(let[k]>let[l]))
            {
                temp=let[k];
                let[k]=let[l];
                let[l]=temp;
            }
        }
    }
    for(h=1;h<=26;h++)
    {
        if(alph[h]!=0)
        printf("%c %d\n",let[h],alph[h]);
    }
    }
}
