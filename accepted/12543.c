#include<stdio.h>
#include<string.h>
int main()
{
    int T,count=0,max=0,temp,a;
    char str[10009],ch,arr[109];
    memset(str,0,sizeof(str));
    memset(arr,0,sizeof(arr));
    while(scanf("%c",&ch)==1)
    {
        if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')||ch=='-')
        {
            str[count]=ch;
            count++;
        }
        else
        {
            if(count>max)
            {
                max=count;
                for(a=0;a<count;a++)
                {
                    if(str[a]>='A'&&str[a]<='Z'){arr[a]=str[a]+32;}
                    else
                    arr[a]=str[a];
                }
                count=0;
            }
            else{memset(str,0,sizeof(str));count=0;}

        }
        if(count==5&&str[0]=='E'&&str[1]=='-'&&str[2]=='N'&&str[3]=='-'&&str[4]=='D'){break;}
    }
  printf("%s\n",arr);
  return 0;
}

