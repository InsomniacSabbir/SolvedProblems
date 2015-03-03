#include<stdio.h>
#include<string.h>
int main()
{
    int T,a,b,c;
    char ch[100];
    scanf("%d",&T);
    getchar();
    for(a=1;a<=T;a++)
    {
        int count=0;
        gets(ch);
        for(b=0;ch[b]!='\0';b++)
        {
          if(ch[b]=='a'||ch[b]=='d'||ch[b]=='g'||ch[b]=='j'||ch[b]=='m'||ch[b]=='p'||ch[b]=='t'||ch[b]=='w'){count=count+1;}
        else if(ch[b]=='b'||ch[b]=='e'||ch[b]=='h'||ch[b]=='k'||ch[b]=='n'||ch[b]=='q'||ch[b]=='u'||ch[b]=='x'){count=count+2;}
        else if(ch[b]=='c'||ch[b]=='f'||ch[b]=='i'||ch[b]=='l'||ch[b]=='o'||ch[b]=='r'||ch[b]=='v'||ch[b]=='y'){count=count+3;}
        else if(ch[b]=='s'||ch[b]=='z'){count=count+4;}
        else{count++;}
        }
        printf("Case #%d: %d\n",a,count);

    }
}
