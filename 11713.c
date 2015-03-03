#include<stdio.h>
#include<string.h>
int main()
{
    int n,T,a,b,c,e,flag=1;
    char str1[100000],str2[100000];
    scanf("%d",&T);
    for(a=1;a<=T;a++)
    {
        flag=1;
        scanf("%s %s" ,&str1,&str2);
        b=strlen(str1);
        c=strlen(str2);
        if(b!=c){flag=0;}
        else
        {
            for(e=0;e<b;e++)
            {
                if(str1[e]!=str2[e])
                {
                    if(str1[e]=='a'||str1[e]=='e'||str1[e]=='i'||str1[e]=='o'||str1[e]=='u')
                    {
                        flag=1;
                    }
                    else{flag=0;break;}

                }
            }

        }
        if(flag==0){printf("No\n");}
            else{printf("Yes\n");}
    }
}
