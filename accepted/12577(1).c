#include<stdio.h>
int main()
{
    char str[100];
    int a=1;
    while(a!=0)
    {
        gets(str);
        if(str[0]=='*'){a=0;}
        else
        {
            if(str[0]=='H'&&str[1]=='a'&&str[2]=='j'&&str[3]=='j'){printf("Case %d: Hajj-e-Akbar\n",a++);}
            else if(str[0]=='U'&&str[1]=='m'&&str[2]=='r'&&str[3]=='a'&&str[4]=='h'){printf("Case %d: Hajj-e-Asghar\n",a++);}
        }
    }
}
