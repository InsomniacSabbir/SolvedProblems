#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c;
    char s[100000],t[100000];
    while(scanf("%s%s",&s,&t)!=EOF)
    {
        int flag=0,x=0;

        for(a=0;a<strlen(t);a++)
        {
            if(s[x]==t[a]){flag++;x++;}
            else{}
            if(flag==strlen(s)){break;}
        }
        //printf("%d\n",strlen(s));
        if(flag==strlen(s)){printf("Yes\n");}
        else{printf("No\n");}

    }
    return 0;
}
