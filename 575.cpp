#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,b,c,i,temp,n;
    char str[10000];
    while(scanf("%s",&str)&&strcmp(str,"0")!=0)
    {
        temp=0;
        n=strlen(str);
        for(a=0;a<n;a++)
        {
            b=n-a;
            c=str[a]-'0';
            i=c*(pow(2,b)-1);
            temp+=i;
        }
        printf("%d\n",temp);
    }
    return 0;
}
