#include<stdio.h>
int main()
{
    int str[1000],a=1,b,c,d,e,temp=0,flag=1,x;
    while(scanf("%d",&str[a])==1&&str[a]!=0)
    {
        a++;
    }
    printf("PERFECTION OUTPUT\n");
    for(b=1;b<a;b++)
    {
        flag=0;
        temp=1;
        x=str[b];
        if(str[b]==1){flag=2;}
        for(c=2;c<=(str[b]/2);c++)
        {
            if(x%c==0)
            {
                temp=temp+c;
                //printf("%d %d\n",x,temp);
            }
            if(temp==str[b]){flag=1;continue;}
            else if(temp<str[b]){flag=2;continue;}
            else{flag=3;continue;}
        }
        if(flag==1){printf("%5d  PERFECT\n",str[b]);}
        else if(flag==2){printf("%5d  DEFICIENT\n",str[b]);}
        else if(flag==3){printf("%5d  ABUNDANT\n",str[b]);}
}
printf("END OF OUTPUT\n");
}
