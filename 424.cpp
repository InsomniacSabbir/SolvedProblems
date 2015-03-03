#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
typedef struct str
{
    int length;
    char arr[1001];
}str;

int main()
{
    int i=1,temp,j,k,maxi=0,x,c,n;
    str ob[200];
    while(scanf("%s",&ob[i].arr)&&strcmp(ob[i].arr,"0")!=0)
    {
        ob[i].length=strlen(ob[i].arr)-1;
        if(ob[i].length>maxi)
        {
            maxi=ob[i].length;
        }
        //printf("%d tomo arr=%s\n",i,ob[i].arr);
        i++;
    }
    temp=0;
    x=-1;
    for(k=maxi+1;k>=0;k--)
    {
        //printf("temp=%d\n",temp);
        //printf("dhukc\n");
        for(j=1;j<i;j++)
        {
            //printf("nxt dhukc\n");
            if(ob[j].length==-1)
            {
                ob[j].length++;
                ob[j].arr[ob[j].length]='0';
            }
            temp=temp+(ob[j].arr[ob[j].length]-'0');
            ob[j].length--;
            //printf("%d\n",temp);
            //printf("j=%d\n",j);
        }
        x++;
        ob[0].arr[k]=(temp%10)+'0';
        temp=temp/10;
    }
    //printf("%s\n",strrev(ob[0].arr));
    n=strlen(ob[0].arr);
    if(ob[0].arr[0]=='0'){c=1;}
    else c=0;
    printf("%d",temp);
    for(c=c;c<n;c++)
    printf("%c",ob[0].arr[c]);
    printf("\n");
    return 0;
}
