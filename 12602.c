#include<stdio.h>
#include<math.h>
#include<string.h>
int abso(int a,int b)
{
    int ans;
    if(a>b)
    {
        ans=a-b;
    }
    else{ans=b-a;}
    return ans;
}
int powr(int a,int b)
{
    int t,ans=1;
    {
        for(t=1;t<=b;t++)
        {
            ans=(ans*a);
        }
    }
    return ans;
}
int main()
{
    int temp,tCase,nCase,i,j,a,n,b,c,len,x,e;
    char arr[9];
    scanf("%d",&tCase);
    getchar();
    for(nCase=1;nCase<=tCase;nCase++)
    {
        gets(arr);
        len=strlen(arr);
        //printf("lenth=%d\n",len);
        //printf("%d\n",len);
        //printf("%s\n",arr);
        n=0;
        for(e=4;e<len;e++)
        {
            n=n*10;
            n=n+(arr[e]-48);
            //printf("%d\n",n);
        }
        temp=0;
        for(j=0,a=2;a>=0;j++,a--)
        {
            if(arr[a]=='A'){i=0;}
            if(arr[a]=='B'){i=1;}
            if(arr[a]=='C'){i=2;}
            if(arr[a]=='D'){i=3;}
            if(arr[a]=='E'){i=4;}
            if(arr[a]=='F'){i=5;}
            if(arr[a]=='G'){i=6;}
            if(arr[a]=='H'){i=7;}
            if(arr[a]=='I'){i=8;}
            if(arr[a]=='J'){i=9;}
            if(arr[a]=='K'){i=10;}
            if(arr[a]=='L'){i=11;}
            if(arr[a]=='M'){i=12;}
            if(arr[a]=='N'){i=13;}
            if(arr[a]=='O'){i=14;}
            if(arr[a]=='P'){i=15;}
            if(arr[a]=='Q'){i=16;}
            if(arr[a]=='R'){i=17;}
            if(arr[a]=='S'){i=18;}
            if(arr[a]=='T'){i=19;}
            if(arr[a]=='U'){i=20;}
            if(arr[a]=='V'){i=21;}
            if(arr[a]=='W'){i=22;}
            if(arr[a]=='X'){i=23;}
            if(arr[a]=='Y'){i=24;}
            if(arr[a]=='Z'){i=25;}

            x=powr(26,j);
            x=x*i;
            temp=temp+x;
        }
        b=abso(temp,n);
        //printf("%d\t%d\t%d\n",temp,n,b);
        if(b<=100)
        {
            printf("nice\n");
        }
        else
        {
            printf("not nice\n");
        }
    }
    return 0;
}
