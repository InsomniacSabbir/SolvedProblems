#include<stdio.h>
#include<string.h>
#include<math.h>
typedef struct Name
{
    char name[1000];
} name;
typedef struct Song
{
    char gaan[30];
} song;
int main()
{
    int T,n,a,b,i=1,j,c,d,e,x,y;
    name str[109];
    song arr[17];
    strcpy(arr[1].gaan , "Happy");
    strcpy(arr[2].gaan , "birthday");
    strcpy(arr[3].gaan , "to");
    strcpy(arr[4].gaan , "you");
    strcpy(arr[5].gaan , "Happy");
    strcpy(arr[6].gaan , "birthday");
    strcpy(arr[7].gaan , "to");
    strcpy(arr[8].gaan , "you");
    strcpy(arr[9].gaan , "Happy");
    strcpy(arr[10].gaan , "birthday");
    strcpy(arr[11].gaan , "to");
    strcpy(arr[12].gaan , "Rujia");
    strcpy(arr[13].gaan , "Happy");
    strcpy(arr[14].gaan , "birthday");
    strcpy(arr[15].gaan , "to");
    strcpy(arr[16].gaan , "you");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        scanf("%s",&str[a].name);
    }
    b=0;d=0;c=0;
    x=ceil(n/16);
    //printf("%d\n",x);
    y=1;
    while(i!=0)
    {
        b++;d++;
        printf("%s: %s\n",str[b].name,arr[d].gaan);
        if(n<=16)
        {
            if(d==16){i=0;}
            if(b==n){b=0;}
        }
        else
        {
            if(y>(16*x)&&d==16){i=0;}
            if(b==n&&d!=16){b=0;}
            if(d==16){d=0;}
        }
        y++;
    }
    return 0;
}
