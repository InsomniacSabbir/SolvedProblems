#include<stdio.h>
int maximum(int i,int j)
{
    if(i>=j){return i;}
    else{return j;}
}
int minimum(int i,int j)
{
    if(i<=j){return i;}
    else{return j;}
}
int main()
{
    int a,q,i,j,mini,maxi,flag,T=1,b;
    char str[1000009];
    while(gets(str))
    {
        if(str[0]=='\0')break;
        else
       {
        scanf("%d",&q);
        /*for(a=0;a<q;a++)
        {
            scanf("%d%d",&i[a],&j[a]);
        }*/
        printf("Case %d:\n",T);
        for(a=0;a<q;a++)
        {
            scanf("%d%d",&i,&j);
            mini=minimum(i,j);
            maxi=maximum(i,j);
            flag=1;
            for(b=mini;b<=maxi;b++)
            {
                if(str[b]!=str[mini]){flag=0;break;}
            }
            if(flag==0){printf("No\n");}
            else{printf("Yes\n");}
        }
            T++;
            getchar();
        }
    }
        return 0;
}
