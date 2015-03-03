#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    long long unsigned tCase,nCase,i,j,k,n,digit[100],digit2[100],x,y,sum,temp,a,b,tempx,tempy,mini,maxi;
    char str[100],sign[100],sign2[100];
    scanf("%llu",&tCase);
    getchar();
    for(nCase=1;nCase<=tCase;nCase++)
    {
        memset(str,0,sizeof(str));
        memset(sign,0,sizeof(sign));
        memset(sign2,0,sizeof(sign2));
        memset(digit,0,sizeof(digit));
        memset(digit2,0,sizeof(digit2));
        //memset(str,0,sizeof(str));
        //memset(str,0,sizeof(str));
        gets(str);
        n=strlen(str);
        x=0;y=0;
        sum=0;maxi=0;mini=0;
        for(i=0;i<n;i++)
        {
            //printf("dhukc\n");
            k=1;
            j=i;
            sum=0;
            sum+=(str[i]-'0');
            j=i+1;
            while(str[j]>='0'&&str[j]<='9')
            {
                //printf("dhukc eidat\n");
                sum=sum*pow(10,k);
                temp=str[j]-'0';
                sum+=temp;
                k++;
                j++;
                //printf("%llu\n",j);
            }
            i=j;
            //printf("%llu\n",sum);
            x++;
            digit[x]=sum;
            digit2[x]=sum;
            y++;
            sign[y]=str[i];
            sign2[y]=str[i];
            //printf("dig=%llu\tsign=%c\tx=%llu\ty=%llu\n",digit[x],sign[y],x,y);
        }
        y--;
        tempx=x;
        tempy=y;
        while(y!=0)
        {
            a=digit[x];
            b=digit[x-1];
            //printf("a=%llu\tb=%llu\tx=%llu\tx-1=%llu\ty=%llu\n",a,b,x,x-1,y);
            if(sign[y]=='*')
            {
                //printf("a=%llu\tb=%llu\tsign=%c\n",a,b,sign[y]);
                temp=a*b;
                //printf("%llu\n",temp);
                digit[x]=0;
                digit[x-1]=0;
                x--;
                digit[x]=temp;
                sign[y]='0';
                y--;

            }
            else{y--;x--;}
        }
        sum=0;
        for(x=1;x<=tempx;x++)
        {
            sum+=digit[x];
            //printf("%llu\n",sum);
        }
        mini=sum;
        //printf("%llu\n",sum);


/* **************************************************** maxi start ********************************** */
      x=tempx;
      y=tempy;
      while(y!=0)
        {
            a=digit2[x];
            b=digit2[x-1];
            //printf("a=%llu\tb=%llu\tx=%llu\tx-1=%llu\ty=%llu\n",a,b,x,x-1,y);
            if(sign2[y]=='+')
            {
                //printf("a=%llu\tb=%llu\tsign=%c\n",a,b,sign2[y]);
                temp=a+b;
                //printf("%llu\n",temp);
                digit2[x]=1;
                digit2[x-1]=1;
                x--;
                digit2[x]=temp;
                sign2[y]='0';
                y--;

            }
            else{y--;x--;}
        }
        sum=1;
        for(x=1;x<=tempx;x++)
        {
            //printf("digit=%llu\n",digit2[x]);
            sum=sum*digit2[x];
            //printf("%llu\n",sum);
        }
        maxi=sum;
        printf("The maximum and minimum are %llu and %llu.\n",maxi,mini);
    }
    return 0;
}
