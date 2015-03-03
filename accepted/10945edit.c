#include<stdio.h>
#include<string.h>
char arr[99999999],str[99999999];
int main()
{
    int a,b,x,n,T=1;
    while(T!=0)
    {
        int flag=1;
        gets(arr);
        if(strcmp(arr , "DONE")==0){T=0;}
        else
        {
            n=strlen(arr);
            for(a=0,x=0;a<n;a++)
            {
                if((arr[a]>='A'&&arr[a]<='Z')||(arr[a]>='a'&&arr[a]<='z'))
                {
                    str[x]=arr[a];
                    x++;
                }
                else{}
            }
            for(a=0,b=x-1;b>=0;b--,a++)
            {
                if((str[a]!=str[b])&&(str[a]!=str[b]+32)&&(str[a]!=str[b]-32))
                {
                    flag=0;
                }
            }
            if(flag==1){printf("You won't be eaten!\n");}
            else if(flag==0){printf("Uh oh..\n");}
        }
    }
    return 0;
}
