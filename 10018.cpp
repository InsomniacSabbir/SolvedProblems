#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int N,i,j,flag,temp,tCase,nCase,n,k,z;
    char num[1000],arr[1000];

    scanf("%d",&tCase);
    for(nCase=1;nCase<=tCase;nCase++)
    {
        z=0;
        scanf("%s",&num);
        //printf("%d %d\n",num[0],num[1]);
        k=0;
        while(z==0)
        {
            n=strlen(num);
            flag=1;
            k++;
            for(j=n-1,i=0;i<n;i++,j--)
            {
                if(num[i]!=num[j])
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
            {

                memset(arr,0,sizeof(arr));
                //printf("asdsa=%c dada=%d\n",arr[0],arr[0]);
                //getchar();
                flag=1;
                for(j=n-1,i=0;i<n;i++,j--)
                {
                    //printf("dhukc\n");

                    arr[i+1]=(arr[i]+((num[i]-'0')+(num[j]-'0')))/10;
                    arr[i]=(arr[i]+((num[i]-'0')+(num[j]-'0')))%10+'0';
                    //printf("%d %d %d %d\n",num[i],num[j],arr[i],(arr[i]+((num[i]-'0')+(num[j]-'0')))%10);
                    //printf("%d %d\n",arr[i+1],arr[i]);
                    //printf("%d\n",(arr[i]+((num[i]-'0')+(num[j]-'0'))/10)-'0');
                    //printf("num[%d]=%c\tnum[%d]=%c\tarr[%d]=%c\n",i,num[i],j,num[j],i,arr[i]);
                    //printf("%d %c\n",arr[i+1],arr[i+1]);
                }
                //printf("%d %c\n",arr[i]);
               // printf("i=%d\n",i);
               if(arr[i]!=0)
                arr[i]+='0';
                //printf("%s\n",arr);
                //getchar();
                strcpy(num,arr);
                //printf("arr=%s\tnum=%s\n",arr,num);
            }
            else
            {
                z=1;
            }
        }
        printf("%d %s\n",k-1,arr);
    }

    return 0;
}
