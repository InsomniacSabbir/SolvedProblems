#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,n,i,j,k,x,arr[100],counter=0,sum,temp;
    char str[1000],ch;
    while(scanf("%s",&str)!=EOF)
    {
        //printf("%s\n",str);
        n=strlen(str);
        for(i=0;i<n;i++)
        {
            //printf("Dhuklam For\n");
            k=1;
            sum=str[i]-'0';
            i++;
            while(str[i]!='+'&&str[i]!='-')
            {
                //printf("Dhuklam while\n");
                sum=sum*pow(10,1);
                temp=str[i]-'0';
                sum+=temp;
                i++;
                k++;
            }
            //printf("ber hoilam while\n");
            arr[1]=sum;
            //printf("arr[1]=%d\n",arr[1]);
            ch=str[i];
            i++;
            k=1;
            sum=str[i]-'0';
            i++;
            while(str[i]!='=')
            {
                 //printf("abr Dhuklam while\n");
                sum=sum*pow(10,1);
                temp=str[i]-'0';
                sum+=temp;
                i++;
                k++;
            }
            //printf("abar ber hoilam while\n");
            arr[2]=sum;
            //printf("arr[2]=%d\n",arr[2]);
            if(str[i+1]=='?'){}
            else
            {
                i++;
                k=1;
                sum=str[i]-'0';
                i++;
                while(str[i]!='\0')
                {
                    // printf("abr Abar Dhuklam while\n");
                    sum=sum*pow(10,1);
                    temp=str[i]-'0';
                    sum+=temp;
                    i++;
                    k++;
                }
               // printf("abar abr ber hoilam while\n");
                arr[3]=sum;
                //printf("arr[3]=%d\n",arr[3]);

            }
        }
       //  printf("ber hoilam for\n");
        if(ch=='+')
        {
            sum=arr[1]+arr[2];
            if(sum==arr[3]){counter++;}
            else{}
        }
        if(ch=='-')
        {
            sum=arr[1]-arr[2];
            if(sum==arr[3]){counter++;}
            else{}
        }
    }
    printf("%d\n",counter);
}
