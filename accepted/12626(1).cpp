#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int n,i,j,test[200],counter,tCase,nCase;
    char arr[1000];
    scanf("%d",&tCase);
    for(nCase=1;nCase<=tCase;nCase++)
    {
        memset(test,0,sizeof(test));
        counter=0;
        scanf("%s",&arr);
        n=strlen(arr);
        for(i=0;i<n;i++)
        {
            test[arr[i]]++;
        }
        while(1)
        {
            if(test['M']==0||test['G']==0||test['I']==0||test['T']==0||test['R']<2||test['A']<3)
            {
                break;
            }
            else
            {
                test['M']--;
                test['G']--;
                test['I']--;
                test['T']--;
                test['R']--;
                test['R']--;
                test['A']--;
                test['A']--;
                test['A']--;
                counter++;
            }
        }

        printf("%d\n",counter);
    }
    return 0;
}
