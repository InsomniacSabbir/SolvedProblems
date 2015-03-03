#include<stdio.h>
#include<math.h>
#include<string.h>


typedef struct move
{
    char str[20];
}move;
int main()
{
    int pos=0,tCase,nCase,instruction,i,n,temp,x,y;
    move ob[10000];
    scanf("%d",&tCase);
    for(nCase=1;nCase<=tCase;nCase++)
    {
        pos=0;
        temp=0;
        scanf("%d",&instruction);
        getchar();
        for(i=1;i<=instruction;i++)
        {
            memset(ob[i].str,0,sizeof(ob[i].str));
            gets(ob[i].str);
            if(!strcmp(ob[i].str,"LEFT")&&!(strstr(ob[i].str,"SAME AS")))
            {
              //  printf("bam\n");
                pos--;
               // printf("pos=%d\n",pos);
            }
            else if(!strcmp(ob[i].str,"RIGHT")&&!(strstr(ob[i].str,"SAME AS")))
            {
               // printf("dan\n");
                pos++;
               //printf("pos=%d\n",pos);
            }
            else
            {
                temp=i;
                while(strstr(ob[temp].str,"SAME AS"))
                {
                   // printf("mainka chipi\n");
                    n=strlen(ob[temp].str);
                    if(n==9)
                    temp=ob[temp].str[n-1]-48;
                    else if(n==10)
                    {
                        x=ob[temp].str[n-2]-48;
                        x=x*10;
                        x+=(ob[temp].str[n-1]-48);
                        temp=x;
                    }
                    else if(n==11)
                    {
                        x=ob[temp].str[n-3]-48;
                        x=x*100;
                        y=ob[temp].str[n-2]-48;
                        y=y*10;
                        x+=y;
                        x+=(ob[temp].str[n-1]-48);
                        temp=x;
                    }
                   // printf("temp=%d\n",temp);
                }
                if(!strcmp(ob[temp].str,"LEFT"))
                {
                    //printf("bam\n");
                    pos--;
                }
                else if(!strcmp(ob[temp].str,"RIGHT"))
                {
                    //printf("dan\n");
                    pos++;
                }
                //printf("pos=%d\n",pos);
            }
        }
        printf("%d\n",pos);
    }
    return 0;
}
