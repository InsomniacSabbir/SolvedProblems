#include<stdio.h>
#include<string.h>
int main()
{
    int a,b=0,flag=1;
    char str[2000];
    while(b!=1)
    {
        flag=1;
        gets(str);
        if(str[0]=='*'){b=1;}
        else
        {
                    for(a=0;str[a]!='\0';a++)
        {
            if(str[a-1]==' ')
            {
                if((str[a]==str[0])||(str[a]==str[0]+32)||(str[a]==str[0]-32)&&a!=0){}
                else{flag=0;break;}
            }
            if(flag==0){break;}
            else{}
        }
        if(flag==0){printf("N\n");}
        else{printf("Y\n");}
        }
    }
    return 0;
}

