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
            if(ch=='E'||ch=='e'){ch='W';}
            else if(ch=='D'||ch=='d'){ch='S';}
            else if(ch=='C'||ch=='c'){ch='X';}
            else if(ch=='R'||ch=='r'){ch='E';}
            else if(ch=='F'||ch=='f'){ch='D';}
            else if(ch=='V'||ch=='v'){ch='C';}
            else if(ch=='T'||ch=='t'){ch='R';}
            else if(ch=='G'||ch=='g'){ch='F';}
            else if(ch=='B'||ch=='b'){ch='V';}
            else if(ch=='Y'||ch=='y'){ch='T';}
            else if(ch=='H'||ch=='h'){ch='G';}
            else if(ch=='N'||ch=='n'){ch='B';}
            else if(ch=='U'||ch=='u'){ch='Y';}
            else if(ch=='J'||ch=='j'){ch='H';}
            else if(ch=='M'||ch=='m'){ch='N';}
            else if(ch=='I'||ch=='i'){ch='U';}
            else if(ch=='K'||ch=='k'){ch='J';}
            else if(ch==','||ch==','){ch='M';}
            else if(ch=='O'||ch=='o'){ch='I';}
            else if(ch=='L'||ch=='l'){ch='K';}
            else if(ch=='.'||ch=='.'){ch=',';}
            else if(ch=='P'||ch=='p'){ch='O';}
            else if(ch==';'||ch==';'){ch='L';}
            else if(ch=='['||ch=='['){ch='P';}
            else if(ch==']'||ch==']'){ch='[';}
            else if(ch==39){ch=';';}
            else if(ch=='/'){ch='.';}
            else if(ch=='s'||ch=='S'){ch='A';}
            else if(ch=='A'||ch=='a'){ch='[';}
            else if(ch=='W'||ch=='w'){ch='Q';}
            else if(ch=='X'||ch=='x'){ch='Z';}
            else if(ch=='2'){ch='1';}
            else if(ch=='3'){ch='2';}
            else if(ch=='4'){ch='3';}
            else if(ch=='5'){ch='4';}
            else if(ch=='6'){ch='5';}
            else if(ch=='7'){ch='6';}
            else if(ch=='8'){ch='7';}
            else if(ch=='9'){ch='8';}
            else if(ch=='0'){ch='9';}
            else if(ch=='-'){ch='0';}
            else if(ch=='1'){ch='`';}
            else if(ch=='='){ch='-';}
            printf("%c",ch);

        }
    }
}

