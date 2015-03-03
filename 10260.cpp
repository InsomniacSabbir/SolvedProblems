#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,a,k,m;
    char j,str[30],arr[30],value[100];
    while(scanf("%s",&str)!=EOF)
    {
        memset(value,0,sizeof(value));
        value['B']=value['F']=value['P']=value['V']='1';
        value['C']=value['G']=value['J']=value['K']=value['Q']=value['S']=value['X']=value['Z']='2';
        value['D']=value['T']='3';
        value['L']='4';
        value['M']=value['N']='5';
        value['R']='6';
        a=0;
        arr[a]=value[str[0]];
        a++;
        n=strlen(str);
        for(i=1;i<n;i++)
        {
           // printf("%c\t%c\n",str[i],value[str[i]]);
            arr[a]=value[str[i]];
            a++;
            if(value[str[i]]==value[str[i-1]])
            {
                a--;
            }
        }
        for(k=0;k<a;k++)
        {
            if(arr[k]>='1'&&arr[k]<='9')
            {
                printf("%c",arr[k]);
            }
        }
        printf("\n");
    }
    return 0;
}
