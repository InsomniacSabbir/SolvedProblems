#include<stdio.h>
#include<string.h>
int main()
{
    int T,a,b,flag=1,c;
    char ch ,str[129],arr[129];
    scanf("%d",&T,&ch);
    getchar();
    for(c=1;c<=T;c++)
    {
        flag=1;
        int n;
        gets(str);
        n=strlen(str);
        b=0;a=0;
        while(flag!=0&&a<n)
        {
            if(n==0){flag=1;}
            else if(n%2!=0){flag=0;}
            else
            {
                if((str[a]=='[')||(str[a]=='(')){arr[b]=str[a];b++;}
                else
               {
                   if(str[a]==')')
                   {
                       if(arr[b-1]=='('){b--;flag=1;}

                       else{flag=0;}
                   }
                   else if(str[a]==']')
                   {
                       if(arr[b-1]=='['){b--;flag=1;}

                       else{flag=0;}
                   }
               }

            }
            a++;

        }
        if(flag==0||b>0){printf("No\n");}
        else{printf("Yes\n");}
    }
    return 0;
}
