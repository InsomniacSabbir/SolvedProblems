#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#define pi acos(-1)
using namespace std;
typedef struct player
{
    char name[1000];
    int attack,deffend;
}player;
int main()
{
    player str[10];
    int a,T,b,i,j,temp,c;
    char arr[1000];
    scanf("%d",&T);
    for(a=1;a<=T;a++)
    {
        b=0;
        while(b!=10)
        {
            scanf("%s%d%d",&str[b].name,&str[b].attack,&str[b].deffend);
            b++;
        }
        for(i=0;i<9;i++)
        {
            for(j=i+1;j<=9;j++)
            {
                if(str[j].attack>str[i].attack)
                {
                    strcpy(arr , str[i].name);
                    strcpy(str[i].name , str[j].name);
                    strcpy(str[j].name , arr);
                    c=str[j].attack;
                    str[j].attack=str[i].attack;
                    str[i].attack=c;
                    c=str[j].deffend;
                    str[j].deffend=str[i].deffend;
                    str[i].deffend=c;
                }
                else if(str[i].attack==str[j].attack)
                {
                    if(str[i].deffend>str[j].deffend)
                    {
                        strcpy(arr , str[i].name);
                        strcpy(str[i].name , str[j].name);
                        strcpy(str[j].name , arr);
                        c=str[j].attack;
                        str[j].attack=str[i].attack;
                        str[i].attack=c;
                        c=str[j].deffend;
                        str[j].deffend=str[i].deffend;
                        str[i].deffend=c;
                    }
                    else if(str[i].deffend==str[j].deffend)
                    {
                            temp=0;
                            while(str[i].name[temp]==str[j].name[temp])
                                {
                                    temp++;
                                }
                if(str[i].name[temp]>str[j].name[temp])
                    {
                        strcpy(arr , str[i].name);
                        strcpy(str[i].name , str[j].name);
                        strcpy(str[j].name , arr);
                        c=str[j].attack;
                        str[j].attack=str[i].attack;
                        str[i].attack=c;
                        c=str[j].deffend;
                        str[j].deffend=str[i].deffend;
                        str[i].deffend=c;
                    }
                  }
                }
            }
        }
        for(i=0;i<4;i++)
        {
            for(j=i+1;j<=4;j++)
            {
                temp=0;
                while(str[i].name[temp]==str[j].name[temp])
                {
                    temp++;
                }
                if(str[i].name[temp]>str[j].name[temp])
                {
                    strcpy(arr , str[i].name);
                    strcpy(str[i].name , str[j].name);
                    strcpy(str[j].name , arr);
                }
            }
        }
        for(i=5;i<9;i++)
        {
            for(j=i+1;j<=9;j++)
            {
                temp=0;
                while(str[i].name[temp]==str[j].name[temp])
                {
                    temp++;
                }
                if(str[i].name[temp]>str[j].name[temp])
                {
                    strcpy(arr , str[i].name);
                    strcpy(str[i].name , str[j].name);
                    strcpy(str[j].name , arr);
                }
            }
        }
        printf("Case %d:\n(%s",a,str[0].name);
        for(c=1;c<=4;c++)
        {
            printf(", %s",str[c].name);
        }
        printf(")\n");
        printf("(%s",str[5].name);
        for(c=6;c<=9;c++)
        {
            printf(", %s",str[c].name);
        }
        printf(")\n");
    }
    return 0;
}

