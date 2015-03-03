#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,i,j,counter,crow,tCase,nCase;
    char ch,arr[1000],str[1000];
    scanf("%d",&tCase);
    for(nCase=1;nCase<=tCase;nCase++)
    {
        counter=0;
        //memset(str,'0',sizeof(str));
        scanf("%d",&a);
        getchar();
        gets(arr);
        for(i=0;i<a;i++)
        {
            if(arr[i]=='#'){str[i]='2';}
            else{str[i]='1';}
        }
        for(j=1;j<a;j++)
        {
            if(str[j]=='0'){}
            else
            {
                if(str[j-1]=='1')
                {
                    str[j+1]='0';
                    str[j-1]='0';
                    str[j]='0';
                    counter++;
                }
                if(j==a-1&&str[j]=='1'){counter++;}
            }
        }
        printf("Case %d: %d\n",nCase,counter);
    }

    return 0;
}
