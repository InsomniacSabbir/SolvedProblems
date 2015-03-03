#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int F,i,j,len,flag;
    char num[1000];
    while(scanf("%d%s",&F,&num)&&(F!=0||strcmp(num,"'0'")==0))
    {
        flag=0;
        len=strlen(num);
        for(i=0;i<len;i++)
        {
            if(num[i]-'0'==F)
            {

            }
            else
            {
                if(num[i]!='0'&&num[i]-'0'!=F)
                {
                    flag=1;
                    printf("%c",num[i]);
                }
                if(num[i]=='0'&&flag==0)
                {

                }
                else if(num[i]=='0'&&flag==1)
                {
                    printf("0");
                }
            }
        }
        if(flag==0)
        {
            printf("0\n");
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}
