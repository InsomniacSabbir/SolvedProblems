#include<stdio.h>
#include<string.h>

int main()
{
    char str[10000],arr[10000];
    int q=0,fre[10000]={0},i,j,k,l,m,n,temp,a;
    while(gets(str))
    {
        int max=0;
        memset(fre,0,sizeof(fre));
        n=strlen(str);
        for(i=0;i<n;i++)
        {
            fre[str[i]]++;
            arr[str[i]]=str[i];
            //printf("%d %d\n",arr[str[i]],fre[str[i]]);
            if(str[i]>max){max=str[i];}
        }

        for(j=0;j<max;j++)
        {
            for(k=j+1;k<=max;k++)
            {
                if(fre[k]>fre[j])
                {
                    //printf("pouchaisi\n");
                    temp=fre[k];
                    fre[k]=fre[j];
                    fre[j]=temp;
                    temp=arr[k];
                    arr[k]=arr[j];
                    arr[j]=temp;
                }
                else if(fre[k]==fre[j])
                {
                    if(arr[k]<arr[j])
                    {
                        temp=arr[k];
                        arr[k]=arr[j];
                        arr[j]=temp;
                    }
                }
            }
        }
        a=max;
        if(q>0)printf("\n");
        while(a!=-1)
        {
            if(fre[a]!=0&&a>=0&&a<=130)
            printf("%d %d\n",arr[a],fre[a]);
            a--;
        }
        q++;
    }
    return 0;
}
