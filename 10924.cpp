#include<stdio.h>
#include<string.h>
#include<math.h>

int prime[2000];

int isPrime(int n)
{
    int i,flag=1;
    if(n==1||n==2||n==3)return 1;
    else
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0){flag=0;}
        }
        if(flag==1){return 1;}
        else return 0;
    }
}

void primegen()
{
    int i;
    for(i=1;i<=1200;i++)
    {
        prime[i]=isPrime(i);
    }
}

int main()
{
    memset(prime,0,sizeof(prime));
    primegen();

    int sum,i,n,temp;
    char arr[100];

    while(gets(arr))
    {
        sum=0;
        n=strlen(arr);
        for(i=0;i<n;i++)
        {
            if(arr[i]=='a'){temp=1;}
            else if(arr[i]=='b'){temp=2;}
            else if(arr[i]=='c'){temp=3;}
            else if(arr[i]=='d'){temp=4;}
            else if(arr[i]=='e'){temp=5;}
            else if(arr[i]=='f'){temp=6;}
            else if(arr[i]=='g'){temp=7;}
            else if(arr[i]=='h'){temp=8;}
            else if(arr[i]=='i'){temp=9;}
            else if(arr[i]=='j'){temp=10;}
            else if(arr[i]=='k'){temp=11;}
            else if(arr[i]=='l'){temp=12;}
            else if(arr[i]=='m'){temp=13;}
            else if(arr[i]=='n'){temp=14;}
            else if(arr[i]=='o'){temp=15;}
            else if(arr[i]=='p'){temp=16;}
            else if(arr[i]=='q'){temp=17;}
            else if(arr[i]=='r'){temp=18;}
            else if(arr[i]=='s'){temp=19;}
            else if(arr[i]=='t'){temp=20;}
            else if(arr[i]=='u'){temp=21;}
            else if(arr[i]=='v'){temp=22;}
            else if(arr[i]=='w'){temp=23;}
            else if(arr[i]=='x'){temp=24;}
            else if(arr[i]=='y'){temp=25;}
            else if(arr[i]=='z'){temp=26;}
            else if(arr[i]=='A'){temp=27;}
            else if(arr[i]=='B'){temp=28;}
            else if(arr[i]=='C'){temp=29;}
            else if(arr[i]=='D'){temp=30;}
            else if(arr[i]=='E'){temp=31;}
            else if(arr[i]=='F'){temp=32;}
            else if(arr[i]=='G'){temp=33;}
            else if(arr[i]=='H'){temp=34;}
            else if(arr[i]=='I'){temp=35;}
            else if(arr[i]=='J'){temp=36;}
            else if(arr[i]=='K'){temp=37;}
            else if(arr[i]=='L'){temp=38;}
            else if(arr[i]=='M'){temp=39;}
            else if(arr[i]=='N'){temp=40;}
            else if(arr[i]=='O'){temp=41;}
            else if(arr[i]=='P'){temp=42;}
            else if(arr[i]=='Q'){temp=43;}
            else if(arr[i]=='R'){temp=44;}
            else if(arr[i]=='S'){temp=45;}
            else if(arr[i]=='T'){temp=46;}
            else if(arr[i]=='U'){temp=47;}
            else if(arr[i]=='V'){temp=48;}
            else if(arr[i]=='W'){temp=49;}
            else if(arr[i]=='X'){temp=50;}
            else if(arr[i]=='Y'){temp=51;}
            else if(arr[i]=='Z'){temp=52;}
            sum+=temp;
        }
        if(prime[sum]==1)
        {
            printf("It is a prime word.\n");
        }
        else if(prime[sum]==0)
        {
            printf("It is not a prime word.\n");
        }
    }
    return 0;
}
