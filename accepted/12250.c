#include<stdio.h>
int main()
{
    char lang[100];
    int T=1,a=1,b;
    while(a!=0)
    {
        scanf("%s",lang);
        if(lang[0]=='#'){a=0;}
        else
        {
            if(lang[0]=='Z'&&lang[1]=='D'&&lang[2]=='R'&&lang[3]=='A'&&lang[4]=='V'&&lang[5]=='S'&&lang[6]=='T'&&lang[7]=='V'&&lang[8]=='U'&&lang[9]=='J'&&lang[10]=='T'&&lang[11]=='E')
            {
                printf("Case %d: RUSSIAN\n",T);
                T++;
            }
    else if(lang[0]=='B'&&lang[1]=='O'&&lang[2]=='N'&&lang[3]=='J'&&lang[4]=='O'&&lang[5]=='U'&&lang[6]=='R')
            {
                printf("Case %d: FRENCH\n",T);
                T++;
            }
    else if(lang[0]=='H'&&lang[1]=='E'&&lang[2]=='L'&&lang[3]=='L'&&lang[4]=='O')
            {
                printf("Case %d: ENGLISH\n",T);
                T++;
            }
    else if(lang[0]=='H'&&lang[1]=='O'&&lang[2]=='L'&&lang[3]=='A')
            {
                printf("Case %d: SPANISH\n",T);
                T++;
            }
    else if(lang[0]=='H'&&lang[1]=='A'&&lang[2]=='L'&&lang[3]=='L'&&lang[4]=='O')
            {
                printf("Case %d: GERMAN\n",T);
                T++;
            }
    else if(lang[0]=='C'&&lang[1]=='I'&&lang[2]=='A'&&lang[3]=='O')
            {
                printf("Case %d: ITALIAN\n",T);
                T++;
            }
            else
            {
                 printf("Case %d: UNKNOWN\n",T);
                 T++;
            }
        }
}
}
