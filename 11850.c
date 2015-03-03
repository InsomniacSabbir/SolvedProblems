#include<stdio.h>
int abso(int n,int m)
{
    if (n>=m){return (n-m);}
    else{return (m-n);}
}
int main()
{
    int a,T,n,str[1425],flag,i,j,c;
    while(scanf("%d",&T)==1&&T!=0)
    {
        flag=1;
        for(a=1;a<=T;a++)
        {
            scanf("%d",&str[a]);
        }
        for(i=1;i<T;i++)
        {
            for(j=i+1;j<=T;j++)
            {
                if(str[i]>str[j])
                {
                    c=str[i];
                    str[i]=str[j];
                    str[j]=c;
                }
            }
        }
        if(str[1]==0)
        {
            for(a=1;a<T;a++)
        {
            n=abso(str[a],str[a+1]);
            if(n<=200){flag=1;}
            else{flag=0;break;}
        }
        for(a=T;a>1;a--)
        {
             n=abso(str[a],str[a-1]);
            if(n<=200){flag=1;}
            else{flag=0;break;}
        }
        }
        else{flag=0;}
        if(flag==1)
        {
            if(((1422-str[T])*2)<=200){flag=1;}
            else{flag=0;}
        }
        else{}
        if(flag==0){printf("IMPOSSIBLE\n");}
        else{printf("POSSIBLE\n");}
    }
}
