#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int n,minimum,i,j,k,counter,flag,temp;
    char str[2000009];

    while(scanf("%d",&n)==1&&n!=0)
    {

        memset(str,0,sizeof(str));
        getchar();
        minimum=999999999;
        //gets(str);
       // printf("%s\n",str);
        flag=1;
        for(i=0;i<n;i++)
        {
            scanf("%c",&str[i]);
            if(str[i]=='Z'){minimum=0;flag=0;}
        }
        //printf("%s\n",str);
        if(flag==0)
        {
            printf("%d\n",minimum);
        }
        else
        {
            for(j=0;j<n;j++)
            {
                counter=0;
                if(str[j]=='R')
                {
                    j++;
                    while(str[j]!='D'&&j<n)
                    {
                        if(str[j]=='.')
                        {
                            counter++;
                        }
                        else if(str[j]=='R')
                        {
                            counter=0;
                        }
                        j++;
                    }
                    if(str[j]=='D')
                    {
                        if(counter<minimum)
                        {
                            minimum=counter;
                        }
                        j--;
                    }
                }
                else if(str[j]=='D')
                {
                    j++;
                    while(str[j]!='R'&&j<n)
                    {
                        if(str[j]=='.')
                        {
                            counter++;
                        }
                        else if(str[j]=='D')
                        {
                            counter=0;
                        }
                        j++;
                    }
                    if(str[j]=='R')
                    {
                        if(counter<minimum)
                        {
                            minimum=counter;
                        }
                        j--;
                    }
                }
            }
            printf("%d\n",minimum+1);
        }
    }
    return 0;
}
