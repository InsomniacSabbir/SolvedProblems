#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    while(scanf("%c",&ch)!=EOF)
    {
        if(ch=='\n'){printf("\n");}
        else
        {
            if(ch=='E'||ch=='e'){ch='Q';}
            else if(ch=='D'||ch=='d'){ch='a';}
            else if(ch=='C'||ch=='c'){ch='z';}
            else if(ch=='R'||ch=='r'){ch='w';}
            else if(ch=='F'||ch=='f'){ch='s';}
            else if(ch=='V'||ch=='v'){ch='x';}
            else if(ch=='T'||ch=='t'){ch='e';}
            else if(ch=='G'||ch=='g'){ch='d';}
            else if(ch=='B'||ch=='b'){ch='c';}
            else if(ch=='Y'||ch=='y'){ch='r';}
            else if(ch=='H'||ch=='h'){ch='f';}
            else if(ch=='N'||ch=='n'){ch='v';}
            else if(ch=='U'||ch=='u'){ch='t';}
            else if(ch=='J'||ch=='j'){ch='g';}
            else if(ch=='M'||ch=='m'){ch='b';}
            else if(ch=='I'||ch=='i'){ch='y';}
            else if(ch=='K'||ch=='k'){ch='h';}
            else if(ch==','||ch==','){ch='n';}
            else if(ch=='O'||ch=='o'){ch='u';}
            else if(ch=='L'||ch=='l'){ch='j';}
            else if(ch=='.'||ch=='.'){ch='m';}
            else if(ch=='P'||ch=='p'){ch='i';}
            else if(ch==';'||ch==';'){ch='k';}
            else if(ch=='['||ch=='['){ch='o';}
            else if(ch==']'||ch==']'){ch='p';}
            else if(ch==39){ch='l';}
            else if(ch=='/'){ch=',';}
            else if(ch=='s'||ch=='S'){ch=']';}
            else if(ch=='A'||ch=='a'){ch='[';}
            else if(ch=='z'||ch=='Z'){ch=39;}
             else if(ch=='X'||ch=='x'){ch='\\';}
            printf("%c",ch);

        }
    }
}
