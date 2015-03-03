#include<stdio.h>
int main()
{
    int a;char ch;
    while(scanf("%c",&ch)!=EOF)
    {
        if(ch!='\n')
        {
            printf("%c",ch);
        }
        else{printf("\n");}
    }
}
