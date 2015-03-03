#include<stdio.h>
int main()
{
    int T,n,b,c,t1,t2,f,a,ct1,ct2,ct3,ct,result;
    char ch;
    scanf("%d",&T);
    for(n=1;n<=T;n++)
    {
        scanf("%d %d %d %d %d %d %d",&t1,&t2,&f,&a,&ct1,&ct2,&ct3);
        if(ct3<=ct1&&ct3<=ct2){ct=(ct1+ct2)/2;}
        else if(ct2<=ct1&&ct2<=ct3){ct=(ct1+ct3)/2;}
        else if(ct1<=ct2&&ct1<=ct3){ct=(ct2+ct3)/2;}
        else{}
        result=t1+t2+f+a+ct;
        if(result>=90){ch='A';}
        else if(result>=80&&result<90){ch='B';}
        else if(result>=70&&result<80){ch='C';}
        else if(result>=60&&result<70){ch='D';}
        else if(result<60){ch='F';}
        printf("Case %d: %c\n",n,ch);
    }
}
