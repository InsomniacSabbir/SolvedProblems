#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a,i,j,k,tCase,nCase,arr[1000],maximum,n;
    char str[100000];

    scanf("%d",&tCase);
    getchar();
    for(nCase=1;nCase<=tCase;nCase++)
    {
        memset(str,0,sizeof(str));
        gets(str);
        n=strlen(str);
        memset(arr,0,sizeof(arr));
        maximum=0;
        for(i=0;i<n;i++)
        {
            if(str[i]>='A'&&str[i]<='Z')
            {
                arr[str[i]+32]++;
                if(arr[str[i]+32]>maximum)
                {
                    maximum=arr[str[i]+32];
                }
            }
            else if(str[i]>='a'&&str[i]<='z')
            {
                arr[str[i]]++;
                if(arr[str[i]]>maximum)
                {
                    maximum=arr[str[i]];
                }
            }
        }
        //printf("max=%d\n",maximum);

        for(j=90;j<126;j++)
        {
            //printf("char=%c\tfreq=%d\n",j,arr[j]);
            if(arr[j]==maximum)
            {
                printf("%c",j);
            }
        }
        printf("\n");
    }
    return 0;
}
