#include<stdio.h>
#include<string.h>
int main()
{
    int T,a,str[101],b,n,temp,tempo,string1[1000],c;
    char arr[1000];
    scanf("%d",&T);
    getchar();
    for(a=1;a<=T;a++)
    {
        memset(str, 0 ,sizeof(str));
        gets(arr);
        n=strlen(arr);
        temp=0;c=0;
        string1[c]=temp;

        for(b=1;b<n-1;b++)
        {
            c++;
            if(arr[temp]!=arr[b])
            {
                str[arr[temp]]++;
                temp=b;
                string1[c]=temp;
            }
            else
            {
              if(b!=n-1)
              {
                  str[arr[b]]++;
              }
              else if(str[arr[temp]]==0)
              {
                  str[arr[temp]]=1;
              }
              temp=string1[c-2];
              c=c-2;
             }
        }
        printf("Case %d\n",a);
        for(b=0;b<101;b++)
        {
            if(str[b]!=0)
            {
                printf("%c = %d\n",b,str[b]);
            }
        }
    }
    return 0;
}

