#include<stdio.h>
int main()
{
    int count=1;
    char ch;
    while(scanf("%c",&ch)!=EOF)
    {
        if(ch=='\n'){printf("\n");}
        else
        {
            if(ch=='"'&&count==2){printf("''");count=1;}
            else if(ch=='"'&&count==1){printf("``");count++;}
            else{printf("%c",ch);}
        }
    }
}
