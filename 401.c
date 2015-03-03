#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int c,a,b,flagp,flagm;
    while(gets(str))
    {
        c=strlen(str);
        //printf("%d\n",c);
        for(a=0,b=c-1;a<c;a++,b--)
        {
            if(str[a]!=str[b]){flagp=0;break;}
            else flagp=1;
        }
        for(a=0,b=c-1;a<c;a++,b--)
        {
            if((str[a]=='A'&&str[b]=='A')||(str[b]=='A'&&str[a]=='A')||(str[a]=='3'&&str[b]=='E')||(str[b]=='3'&&str[a]=='E')||(str[a]=='H'&&str[b]=='H')||(str[b]=='H'&&str[a]=='H')||(str[a]=='I'&&str[b]=='I')||(str[b]=='I'&&str[a]=='I')||(str[a]=='J'&&str[b]=='L')||(str[b]=='J'&&str[a]=='L')||(str[a]=='M'&&str[b]=='M')||(str[b]=='O'&&str[a]=='O')||(str[a]=='S'&&str[b]=='2')||(str[b]=='S'&&str[a]=='2')||(str[a]=='T'&&str[b]=='T')||(str[b]=='V'&&str[a]=='V')||(str[a]=='U'&&str[b]=='U')||(str[b]=='W'&&str[a]=='W')||(str[a]=='X'&&str[b]=='X')||(str[b]=='Y'&&str[a]=='Y')||(str[a]=='Z'&&str[b]=='5')||(str[b]=='Z'&&str[a]=='5')||(str[a]=='1'&&str[b]=='1')||(str[b]=='8'&&str[a]=='8'))
            {
                flagm=1;
            }
            else {flagm=0;break;}
        }
        if(flagm==1&&flagp==1){printf("%s -- is a mirrored palindrome.\n\n",str);}
        else if(flagp==1&&flagm!=1){printf("%s -- is a regular palindrome.\n\n",str);}
        else if(flagm==1&&flagp!=1){printf("%s -- is a mirrored string.\n\n",str);}
        else if(flagm==0&&flagp==0){printf("%s -- is not a palindrome.\n\n",str);}

    }
}
