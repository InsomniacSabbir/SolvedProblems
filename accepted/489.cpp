#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int tCase,i,j,k,c,d,data[27],m,n,guess[27];
    char arr[1024],str[1024];
    while(scanf("%d",&tCase)==1&&tCase!=-1)
    {


        c=0;d=0;
        memset(arr,'\0',sizeof(arr));
        memset(str,'\0',sizeof(str));
        memset(data,0,sizeof(data));
        memset(guess,0,sizeof(guess));

        scanf("%s %s",&arr,&str);
        n=strlen(arr);
        m=strlen(str);
        for(i=0;i<n;i++)
        {
            if(data[arr[i]-96]==0)
            {
                c++;
                data[arr[i]-96]=1;

            }
        }
        j=0;
        for(i=0;i<m;i++)
        {
            if(guess[str[i]-96]==0)
            {

                if(data[str[i]-96]==1&&j<7)
                {

                    d++;
                    data[str[i]-96]=0;

                }
                else if(data[str[i]-96]==0&&d<c){j++;}
                guess[str[i]-96]=1;
            }
        }

        printf("Round %d\n",tCase);
        if(d>=c&&j<7)
        {
            printf("You win.\n");
        }
        else
        {
            if(d<c&&j>=7)
            {
                printf("You lose.\n");
            }
            else if(d<c&&j<7)
            {
                printf("You chickened out.\n");
            }
        }
    }

    return 0;
}
